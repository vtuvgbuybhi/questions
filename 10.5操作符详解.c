#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.算数操作符
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a);
//	int b = 5 % 2;
//	printf("%d", b);
//	return 0;
//}

//2.移位操作符
//int main()
//{
//	int a = 16;
//	// >>--右移操作符
//	//移动的是二进制位
//	//正数--原码，反码，补码一样
//	//00000000000000000000000000010000
//	int b= a >> 1;
//	printf("%d", b);
//}

//int main()
//{
//	int a = -1;
//	//整数的二进制表示有：原码，反码，补码
//	//存储到内存中的是补码
//	// 首位是符号位1表示负数   0表示正数
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码--符号位不变，剩下的按位取反
//	//11111111111111111111111111111111-补码--反码加1
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}

//3.位操作符
//int main()
//{
//	//&-按二进制与
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//011
//	//101
//	//001--1
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	//按二进制位或
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	//011
//	//101
//	//111---7
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	//按二进制位异或--相同为0，相异为1
//	int a = 3;
//	int b = 5;
//	//011
//	//101
//	//110--6
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}

//交换两个变量，不能有第三个变量
//int main()
//{
//	a,b值过大时加减法---可能溢出
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d ", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d ", a, b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	num=num / 2;
//	//}
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//4.赋值操作符
//5.复合赋值符
//6 单目操作符
//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 10;//解引用操作符
//	printf("%d",*p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof 计算的变量所占内存空间的大小，单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}



























