#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//首先介绍   strcpy   和  strncpy的 用法和实现

//strcpy   -->  用于字符串的复制函数  char*strcpy（char*dest，char*src）
//将src指向的字符串复制到dest中   返回dest指针的起始地址
//注意拷贝的目的地必须能够容纳拷贝的字符串大小   ，且目标字符串的'\0'也会拷贝到目的地中

//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "fvtu";
//	char arr2[20] = "vyutgbuy";
//	//strcpy(arr2, arr1);
//	char*ret=my_strcpy(arr2, arr1);
//	printf("%s\n", ret);
//	return 0;
//}

//strncpy   -->  char*strncpy(char*dest,char*src,size_t n)
//将src指向的字符串前n个字符复制到dest指向的数组中     
//若src的长度小于n    则补'\0'
//若src的长度大于n   不会将空字符自动加到末尾

//char* my_strncpy(char* dest, char* src, int  n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (n&&(* dest++ = *src++))
//	{
//		n--; 
//	}
//	if (n)
//	{
//		while (--n)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "fvytugbgy7g8";
//	char arr2[] = "uybhj";
//	strncpy(arr1, arr2, 3);
//	//char* ret = my_strncpy(arr1, arr2, 7);
//	return 0;
//}


//字符串追加函数   --》 strcat    和   strncat

//strcat  函数是字符串追加函数，也就是在目的地字符串后追加一个字符串
//目的地的空间一定要足够大  -->不够的话报错
//目的地末尾的'\0'会被覆盖  ，  源头的'\0'会被拷贝

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	//strcat(arr1, arr2);
//	char* ret = my_strcat(arr1, arr2);
//	return 0;
//}


//strncat   --> 从字符串src的开头拷贝n个字符串到dest字符串的尾部
//dest 要有足够的空间
//字符串追加完成后再追加'\0'
//如果追加长度大于src长度 --> 仅将src全部追加到dest尾部
//如果追加长度小于dest长度--》那么在追加n个字符完成后，再追加'\0'

//char* my_strncat(char* dest, char* src, int n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (n && (*dest++ = *src++))
//	{
//		n--;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "vbyub";
//	char arr2[] = "buyihbi";
//
//	//strncat(arr1, arr2, 3);
//
//	my_strncat(arr1, arr2, 5);
//	return 0;
//}



//memcpy   和  memmove    函数

//memcpy   将src指向的内存地址的起始位置拷贝n个字节到dest所指向的内存起始位置
//特别注意的是src指向的内存区域不能与dest指向的内存区域重叠--》这个函数不能保证所在重叠区域在拷贝之前不被覆盖
//覆盖原有数据

//void* my_memcpy(void* dest, const void* src, int n)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (n--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int b[3] = { 4,5,6 };
//	//memcpy(a, b, 8);
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//	my_memcpy(a, b, 12);
//	return 0;
//}

//memcpy  和  strcpy 的区别

//                        memcpy                       strcpy
//-----------------------------------------------------------------------
//|  复制的    |    可以复制任意类内容        |     只能复制字符串      |
//| 内容不同   |                              |                         |
//-----------------------------------------------------------------------
//| 复制的    |  是根据3个参数决定            |  遇到被复制的字符串'\0'  |
//|  方法     |   复制的长度                  |   才结束                 |
//------------------------------------------------------------------------
//|  用途     |复制其它数据类型时用           |    复制字符串时才用      |
//|  不同     |                               |                          |
//------------------------------------------------------------------------


//mommove   解决memcpy不能内存叠加的情况

//void* my_memmove(void* dest, const void* src, int count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*) src + 1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//
//	}
//
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,9,10 };
//	//memmove(arr1 + 2, arr1, 12);
//	my_memmove(arr1 + 2, arr1, 12);
//	return 0;
//}








