#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��n=1ʱֻ��Ҫ��A���ƶ���C��
//��n=2ʱ��Ҫ��A���������һ�������ƶ���B   �ٽ�A��ʣ�µ�һ�����ƶ���C��Ȼ���ٽ�B�ϵ�һ�����ƶ���C�ϼ���
//��n=3ʱ�Ƚ���������������ƶ���B��,�ٽ�������������ƶ���C�ϣ���ôʣ�µ�2�����Ӻ�������ƶ�����һ��
//�Դ����ƣ����ݹ�
int count = 0;
void move(char A, char C, int n)
{
	printf("�ѵ�%d��Բ�̴�%c-%c \n",n,A,C);
	count++;
}
void hannota(char A, char B, char C, int n)
{
	if (n == 1)//��ֻ��һ��������A��ʱֻҪ��A�ƶ���C�ϼ���
	{
		move(A, C, n);
	}
	else
	{
		hannota(A, C, B, n - 1);//��n-1�����Ӵ�A����C���ƶ���B�̣����ǲ����м�����ôʵ�ֵģ�ֻ��Ҫ֪���������һ���ܹ�ʵ��
		move(A, C, n);//���������ĵ�n�������Ƶ�Ŀ����
		hannota(B, A, C, n - 1);//�ٽ�ʣ����B���ϵ�n-1�����ӽ�����A�ƶ���C
	}
}
int main()
{
	int n = 0;
	printf("���������:");
	scanf("%d", &n);
	hannota('A', 'B', 'C', n);
	printf("%d", count);
	return 0;
}











