#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int qingwa(int n)
{
	if (n == 1)//当只有1个台阶时，只有一种跳法
	{
		return 1;
	}
	if (n == 2)//当只有2个台阶时，只有2种跳法
	{
		return 2;
	}
	else
		return qingwa(n - 2) + qingwa(n - 1);//qingwa（n-2）是假设青蛙第一跳是2个台阶，剩下（n-2）个台阶就是（n-2）个台阶的跳法，以此类推到最后剩下1个
	//或者2个台阶是递归结束
	//qingwa（n-2）同理
}
int main()
{
	int n = 0;
	int num = 0;
	printf("输入青蛙需要跳的台阶:");
	scanf("%d", &n);
	num=qingwa(n);
	printf("一共有%d种跳法", num);

	return 0;
}


















