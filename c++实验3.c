#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//1、编程计算n!，要求从键盘输入一个整数n，计算阶乘后，将结果输出到屏幕上。
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;//注意这边num起始一定得是1，不然后面结果一定是0
//	printf("请输入一个数字:\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//一次for循环就够了
//	{
//		num = num * i;//通过for循环不断累加
//	}
//	printf("%d", num);
//}

//2、编程计算12 + 22 + ...102
//int main()
//{
//	int n = 12;
//	int num = 0;
//	for (n = 12; n <= 102; n+=10)
//	{
//		num = num + n;
//	}
//	printf("%d", num);
//	return 0;
//}

//3、编程求水仙花数。P75
//int main()
//{
//	int n = 0;
//	int i, j, k = 0;
//	printf("请输入要验证是否是秋水仙素:\n");
//	scanf("%d", &n);
//	i = n % 10;//取余数
//	j = (n / 10) % 10;
//	k = (n / 100) % 10;
//	if (n == i * i * i + j * j * j + k * k * k)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//}
//4、编程打印九九乘法表。P76 - P77
//int main()
//{
//	int sum = 0;
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = i * j;
//			printf("%d*%d=%2d ", i,j,sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//拓展实验（选做）：
//一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如，6的因子为1、2、3，而6 = 1 + 2 + 3，因此6是"完数"。请编写程序，找出1 - n之内的所有完数。
//输入格式：输入整数n的值
//输出格式：每行按格式输出其因子，例：6 = 1 + 2 + 3
//输入样例：
//1000
//输出样例：
//6 = 1 + 2 + 3
//28 = 1 + 2 + 4 + 7 + 14
//496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248

//int main()
//{
//	int n = 0;
//	int sum;
//	printf("输入一个范围:");
//	scanf("%d", &n);
//	for (int i = 2; i <= n; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j < i; j++)
//		{
//			int t = i % j;
//			if (t == 0)
//			{
//				sum += j;
//			}
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int k = 0;
//	printf("输入一个范围判断是否是完数:");
//	scanf("%d", &n);
//	for (k = 2; k <= n; k++)
//	{
//		int sum = 0;
//		for (i = sqrt(k); i >= 1; i--)
//		{
//			for (j = sqrt(k); j <=k; j++)
//			{
//				if (i * j == k)
//				{
//					sum = sum+i + j;
//				}
//			}
//		}
//		if (sum == 2*k)
//		{
//			printf("%d\n", k);
//		}
//	}
//	return 0;
//}




























