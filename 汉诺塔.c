#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//当n=1时只需要将A盘移动到C盘
//当n=2时需要将A盘最上面的一个盘子移动到B   再将A上剩下的一个盘移动到C，然后再将B上的一个盘移动到C上即可
//当n=3时先将上面的两个盘子移动到B上,再将最下面的盘子移动到C上，那么剩下的2个盘子和上面的移动方法一样
//以此类推，层层递归
int count = 0;
void move(char A, char C, int n)
{
	printf("把第%d个圆盘从%c-%c \n",n,A,C);
	count++;
}
void hannota(char A, char B, char C, int n)
{
	if (n == 1)//当只有一个盘子在A上时只要将A移动到C上即可
	{
		move(A, C, n);
	}
	else
	{
		hannota(A, C, B, n - 1);//将n-1个盘子从A借助C盘移动到B盘，我们不管中间是怎么实现的，只需要知道这个过程一定能够实现
		move(A, C, n);//将最的下面的第n个盘子移到目标盘
		hannota(B, A, C, n - 1);//再将剩下在B盘上的n-1个盘子借助于A移动到C
	}
}
int main()
{
	int n = 0;
	printf("请输入层数:");
	scanf("%d", &n);
	hannota('A', 'B', 'C', n);
	printf("%d", count);
	return 0;
}











