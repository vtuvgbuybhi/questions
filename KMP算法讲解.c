#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//讲解KMP算法之前 ，我们先实现strstr库函数的实现
//首先我们得知道strstr是干什么用的  
//比如一个字符串s="abcdef"   --我们要判断一个字符串t="abc"是否在s中就可用strstr

//当t存在s中strtr返回t在s中首元素的地址
//不存在时返回一个空指针

//实现这个库函数strstr
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);//断言保证指针的有效性
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	while (*cur)
//	{
//		s1 = cur;//cur是记录我们p1查找的位置
//
//		s2 = p2;//一次循环完，没有找到字串，需要将指针重新置于p2的起始位置 ---->注意这个就是我们这个方法最笨的地方
//		//KMP算法也就是优化这个地方的---->非常重要这个地方
//
//
//		while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//说明找到了字串  --> 把字串开始的查找的位置返回
//		}
//		else if (*s1 == '\0')//说明p1的长度小于p2 --->就一定不能找到要的字串
//		{
//			return NULL;
//		}
//		else
//			cur++;//说明这个位置开始查找没有发现字串  --》从下一个位置开始
//	}
//
//}
//
//int main()
//{
//	char s[] = "abfvtybc";
//	char t[] = "abc";
//	//char* ret = strstr(s, t);
//	char* ret = my_strstr(s, t);
//	if (*ret == NULL)
//	{
//		printf("不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//
//	//printf("%s\n", ret);
//	return 0;
//}



//KMP -----    用空间换时间 -----算法的核心



//上面的方法我们可以知道效率是不高的----》每一次在p1的某个位置查找完，需要往下一个位置开始查找时，p2的指针都需要重新
//指向起始位置，重新从p2的起始位置开始匹配 ----》这个就是导致我们上面程序效率不高最重要的原因

//KMP算法就是解决以上导致我们效率不高问题的方法 ---就是减少字串回溯的次数或者个数   

//我们在讲KMP算法之前我们要先了解  -----   什么是字符串最长前后缀

//s="abcabc"
//s的前缀  --  {"a","ab","abc","abcd","abcab"}
//s的后缀  --  {"c","bc","abc","cabc","bcabc"}
//那么s的前后缀相等就是------"abc"   长度就是3

//那我们现在已经知道什么是字符串的前后缀了


//我们现在讲讲KMP是怎么让字串的回溯减少的呢 ---


// s =  "abcabeabcabcmn"
// t =  "abcabcmn"

//我们可以知道s主串前"abcab"都是跟子串t匹配的----》当是下一个字符"e" 与 "c" 是不匹配的
//根据KMP的思想我们就是要找出指向"c"的这个指针需要往前挪动几个位置

//"e"   ---  前面字符串最长前后缀就是 "ab"
//"c"   --- 前面字符串最长前后缀当然也是"ab"了 ---因为前面都是匹配的当然最长前后缀也是一样的了


//我们将主串"e"前面字符串前缀 跟 子串"c"前面字符串的前缀对齐 ---

// s = "ab c ab eabcabcmn"
// t =      "ab c ab cmn"

//那么这时候我们就可以将原本指向"c"的指针往前挪 移动到指向"ab"的下一个字符串  --》在将指向的字符与"e"进行对比----》往复循环上面步骤

//这样子我们就不用每次匹配失败都需要将指向子串某个位置的指针移动到子串的起始位置了 

//那么现在好了---问题又来了我们怎么找到子串中每一个位置前面字符的前后缀长度呢

//我们用next[]数组来存储子串中每一个字符前面字符串最长前后缀长度

//next[i]=j     ---> 下标为i的字符前面的字符串最长前后缀长度为j

//我们以"abcabcmn"为例
//next[0]=-1  ----->前面没有字符串进行单独处理，直接设置成 -1
//next[1]=0   next[2]=0   next[3]=0   next[4]=1  next[5]=2   next[6]=3   next[7]=0

// s = "ab c ab eabcabcmn"
// t =      "ab c ab cmn"

//上面我们让s[5]与t[5]前面字符串的最长前后缀后一个字符再进行比较 --》该字符的位置不就是t[2]---》"c" 了嘛
//也就是next[5]数组应该保存的值

//所以接下来就是比较    s[5]与t[next[5]]的字符了  ---》 这也就是为什么KMP算法的代码那么简洁的原因了

//我们可以先总结next[i]=j的数组作用
//1.next[i]的值表示下标为i字符前的字符串最长相等的前后缀的长度
//2.表示该出字符不匹配时应该回溯到的位置

//那么我们现在就要来求next[]数组了

//typedef struct
//{
//	char data[20];
//	int length;
//}stu;

//void GetNext(stu1 t, int next[])
//{
//	int j = 0;
//	int k = -1;
//
//	next[0] = -1;//首元素前无字符串，给值-1
//
//	while (j < t.length) 
//	//next数组中下标最大为t,length-1  而每一步给next数组赋值时都是在j++之后
//	//所以最后一次经过while循环时j=t.length-2
//	{
//		if (k == -1 || t.data[j] == t.data[k])
//		{
//			k++;
//			j++;
//			next[j] = k;
//			//在对应字符匹配的情况下   s与t同时向后移动
//		}
//		else
//		{
//			k = next[k];//这步大有学问--只能自己悟了--没有图形结合不容易理解
//
//			//我们现在最大next[k]的值代表的是下标为k的字符前字符串最长相等前后缀的长度
//			//也表示该出字符不匹配时，指针应该回溯到的字符下标
//			//这个值给k后有进行while循环判断，此时t.data[k]指的就是最长相等前缀后一个字符
//			//至于为什么回溯，跟KMP思想一样
//		}
//	}
//}
//
//int main()
//{
//	stu t = { "abcabcmn",8 };
//	int next[8] = { 0 };
//	GetNext(t,next);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("next[%d]=%d\n", i, next[i]);
//	}
//	return 0;
//}


//那么上面就是怎么求next[]的代码思想了----》现在我们在来看看KMP算法是怎么解决问题的

//typedef struct
//{
//	char data[20];
//	int length;
//}stu;
//
//typedef struct
//{
//	char data[20];
//	int length;
//}stu1;
//
//void GetNext(stu1 t, int next[])
//{
//	int j = 0;
//	int k = -1;
//
//	next[0] = -1;//首元素前无字符串，给值-1
//
//	while (j < t.length)
//		//next数组中下标最大为t,length-1  而每一步给next数组赋值时都是在j++之后
//		//所以最后一次经过while循环时j=t.length-2
//	{
//		if (k == -1 || t.data[j] == t.data[k])
//		{
//			k++;
//			j++;
//			next[j] = k;
//			//在对应字符匹配的情况下   s与t同时向后移动
//		}
//		else
//		{
//			k = next[k];//这步大有学问--只能自己悟了--没有图形结合不容易理解
//
//			//我们现在最大next[k]的值代表的是下标为k的字符前字符串最长相等前后缀的长度
//			//也表示该出字符不匹配时，指针应该回溯到的字符下标
//			//这个值给k后有进行while循环判断，此时t.data[k]指的就是最长相等前缀后一个字符
//			//至于为什么回溯，跟KMP思想一样
//		}
//	}
//}
//
//
//int KMPIndex(stu s, stu1 t)
//{
//	int next[8];
//	int i = 0;
//	int j = 0;
//	GetNext(t, next);
//	while (i < s.length && j < t.length)
//	{
//		if (j == -1 || s.data[i] == t.data[j])
//		{
//			i++;
//			j++;//i ,j 各增加1
//		}
//		else
//			j = next[j];//i不动，j后退
//	}
//	if (j = t.length)
//	{
//		return (i - t.length);//返回子串在主串的下标
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//
//int main()
//{
//	stu s = { "abcabeabcabcmn",11 };
//	stu1 t = { "abcabcmn",8 };
//	int ret=KMPIndex(s, t);
//	if (ret == -1)
//	{
//		printf("不存在");
//	}
//	else
//	{
//		printf("下标是:%d", ret);
//	}
//	return 0;
//}

































