#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define NUM 200
//方法1；试除法,效率低，遍历循环
int main()
{
	int i = 0;
	int count = 0;
	printf("输出1-120的素数:\n");
	for (i = 1; i <= 120; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)//试除了除1和它本身的所以数
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)//当试除到和它相等的数时说明它的公因式只有1和它本身了；它就是一个素数
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("素数一共有%d", count);
	return 0;
}
//方法2；在方法1的基础上进行一定的优化；不过任然效率底，还是遍历循环所有的数
int main()
{
	int i = 0;
	int j = 0;
	int count = 1;
	printf("打印1-120的素数:\n");
	printf("2\n");//2本身是一个素数，不能忽略了
	for (i = 3; i <= 120; i += 2)   //  排除了2的倍数，但是在方法上还是采用了遍历循环的方法
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("素数一共有%d", count);
	return 0;
}

//方法3:我们知道一个数字若可因式分解，那么可知其中的两个因式一定都小于等于sqrt（n）
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 2; i <= 120; i++)
	{
		for (j = 2; j <=sqrt(i); j++)//试除了2—sqrt（i）之间的所以数
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("素数一共有%d", count);
	return 0;
}
 
 
//对于前面的三种方法，都是通过试除法的方法，在执行效率上没有本质区别

//方法4；筛选法，在效率在本质上有了质的提升
 //筛选法；我们知道2是素数，那么2的倍数都不是素数了，可以把4，6，8等等2的倍数全部排除掉，
//那么下一个数只可能被1和它自身整除了；而2后面没有被排除的数是3，再把3保留，把3的倍数全部排除，以此类推
 
int main()
{
	int i = 0;
	int count = 0;
	bool is_prime[NUM] = { 0 };
	for (i = 0; i < NUM; i++)//将bool类型的数组初始化
	{
		is_prime[i] = true;
	}
	printf("打印1-120的素数:");
	for (i = 2; i <= 120; i++)
	{
		if (is_prime[i]==true)
		{
			int j = 0;
			count++;
			printf("%d\n", i);
			for (j = i + i; j <= 120; j += i)//重i的倍数开始将i的倍数全部筛选出来
			{
				is_prime[j] = false;
			}
		}
	}
	printf("素数一共有%d个",count);
	return 0;
}


//方法5；在方法4的基础上进行一步优化
int main()
{
	int i = 0;
	int count = 0;
	bool is_prime[NUM] = { 0 };
	for (i = 0; i < NUM; i++)
	{
		is_prime[i] = true;
	}
	printf("打印1-120的素数:\n");
	for (i = 2; i <= 120; i++)
	{
		if (is_prime[i] == true)
		{
			int j = 0;
			printf("%d\n", i);
			count++;
			for (j = i * i; j <= 120; j += i)//直接重i的i倍开始筛选
			{
				is_prime[j] = false;
			}
		}
	}
	printf("素数一共有%d", count);
	return 0;
}
















