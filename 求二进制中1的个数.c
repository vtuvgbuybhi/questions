#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����1----�޷�����
//int main()
//{
//	int num = 0;
//	int count = 0;
//	printf("����һ������:\n");
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num=num / 2;
//	}
//	printf("%d", count);
//	return 0;
//}

//����2--����˸���������������
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//32bit
//	//000000000000000000000000000000010===2
//	//000000000000000000000000000000001===1
//	// ��λ��
//	//000000000000000000000000000000001===1
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
//����3--
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}



















