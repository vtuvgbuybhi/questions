#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//1����̼���n!��Ҫ��Ӽ�������һ������n������׳˺󣬽�����������Ļ�ϡ�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;//ע�����num��ʼһ������1����Ȼ������һ����0
//	printf("������һ������:\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//һ��forѭ���͹���
//	{
//		num = num * i;//ͨ��forѭ�������ۼ�
//	}
//	printf("%d", num);
//}

//2����̼���12 + 22 + ...102
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

//3�������ˮ�ɻ�����P75
//int main()
//{
//	int n = 0;
//	int i, j, k = 0;
//	printf("������Ҫ��֤�Ƿ�����ˮ����:\n");
//	scanf("%d", &n);
//	i = n % 10;//ȡ����
//	j = (n / 10) % 10;
//	k = (n / 100) % 10;
//	if (n == i * i * i + j * j * j + k * k * k)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//}
//4����̴�ӡ�žų˷���P76 - P77
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

//��չʵ�飨ѡ������
//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"�����磬6������Ϊ1��2��3����6 = 1 + 2 + 3�����6��"����"�����д�����ҳ�1 - n֮�ڵ�����������
//�����ʽ����������n��ֵ
//�����ʽ��ÿ�а���ʽ��������ӣ�����6 = 1 + 2 + 3
//����������
//1000
//���������
//6 = 1 + 2 + 3
//28 = 1 + 2 + 4 + 7 + 14
//496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248

//int main()
//{
//	int n = 0;
//	int sum;
//	printf("����һ����Χ:");
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
//	printf("����һ����Χ�ж��Ƿ�������:");
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




























