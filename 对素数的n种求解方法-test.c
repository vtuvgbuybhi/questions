#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define NUM 200
//����1���Գ���,Ч�ʵͣ�����ѭ��
int main()
{
	int i = 0;
	int count = 0;
	printf("���1-120������:\n");
	for (i = 1; i <= 120; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)//�Գ��˳�1���������������
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)//���Գ���������ȵ���ʱ˵�����Ĺ���ʽֻ��1���������ˣ�������һ������
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("����һ����%d", count);
	return 0;
}
//����2���ڷ���1�Ļ����Ͻ���һ�����Ż���������ȻЧ�ʵף����Ǳ���ѭ�����е���
int main()
{
	int i = 0;
	int j = 0;
	int count = 1;
	printf("��ӡ1-120������:\n");
	printf("2\n");//2������һ�����������ܺ�����
	for (i = 3; i <= 120; i += 2)   //  �ų���2�ı����������ڷ����ϻ��ǲ����˱���ѭ���ķ���
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
	printf("����һ����%d", count);
	return 0;
}

//����3:����֪��һ������������ʽ�ֽ⣬��ô��֪���е�������ʽһ����С�ڵ���sqrt��n��
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 2; i <= 120; i++)
	{
		for (j = 2; j <=sqrt(i); j++)//�Գ���2��sqrt��i��֮���������
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
	printf("����һ����%d", count);
	return 0;
}
 
 
//����ǰ������ַ���������ͨ���Գ����ķ�������ִ��Ч����û�б�������

//����4��ɸѡ������Ч���ڱ����������ʵ�����
 //ɸѡ��������֪��2����������ô2�ı��������������ˣ����԰�4��6��8�ȵ�2�ı���ȫ���ų�����
//��ô��һ����ֻ���ܱ�1�������������ˣ���2����û�б��ų�������3���ٰ�3��������3�ı���ȫ���ų����Դ�����
 
int main()
{
	int i = 0;
	int count = 0;
	bool is_prime[NUM] = { 0 };
	for (i = 0; i < NUM; i++)//��bool���͵������ʼ��
	{
		is_prime[i] = true;
	}
	printf("��ӡ1-120������:");
	for (i = 2; i <= 120; i++)
	{
		if (is_prime[i]==true)
		{
			int j = 0;
			count++;
			printf("%d\n", i);
			for (j = i + i; j <= 120; j += i)//��i�ı�����ʼ��i�ı���ȫ��ɸѡ����
			{
				is_prime[j] = false;
			}
		}
	}
	printf("����һ����%d��",count);
	return 0;
}


//����5���ڷ���4�Ļ����Ͻ���һ���Ż�
int main()
{
	int i = 0;
	int count = 0;
	bool is_prime[NUM] = { 0 };
	for (i = 0; i < NUM; i++)
	{
		is_prime[i] = true;
	}
	printf("��ӡ1-120������:\n");
	for (i = 2; i <= 120; i++)
	{
		if (is_prime[i] == true)
		{
			int j = 0;
			printf("%d\n", i);
			count++;
			for (j = i * i; j <= 120; j += i)//ֱ����i��i����ʼɸѡ
			{
				is_prime[j] = false;
			}
		}
	}
	printf("����һ����%d", count);
	return 0;
}
















