#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.����������
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a);
//	int b = 5 % 2;
//	printf("%d", b);
//	return 0;
//}

//2.��λ������
//int main()
//{
//	int a = 16;
//	// >>--���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	//����--ԭ�룬���룬����һ��
//	//00000000000000000000000000010000
//	int b= a >> 1;
//	printf("%d", b);
//}

//int main()
//{
//	int a = -1;
//	//�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬����
//	//�洢���ڴ��е��ǲ���
//	// ��λ�Ƿ���λ1��ʾ����   0��ʾ����
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����--����λ���䣬ʣ�µİ�λȡ��
//	//11111111111111111111111111111111-����--�����1
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}

//3.λ������
//int main()
//{
//	//&-����������
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
//	//��������λ��
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
//	//��������λ���--��ͬΪ0������Ϊ1
//	int a = 3;
//	int b = 5;
//	//011
//	//101
//	//110--6
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}

//�������������������е���������
//int main()
//{
//	a,bֵ����ʱ�Ӽ���---�������
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

//4.��ֵ������
//5.���ϸ�ֵ��
//6 ��Ŀ������
//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ������
//	*p = 10;//�����ò�����
//	printf("%d",*p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof ����ı�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}



























