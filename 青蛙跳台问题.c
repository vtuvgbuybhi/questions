#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int qingwa(int n)
{
	if (n == 1)//��ֻ��1��̨��ʱ��ֻ��һ������
	{
		return 1;
	}
	if (n == 2)//��ֻ��2��̨��ʱ��ֻ��2������
	{
		return 2;
	}
	else
		return qingwa(n - 2) + qingwa(n - 1);//qingwa��n-2���Ǽ������ܵ�һ����2��̨�ף�ʣ�£�n-2����̨�׾��ǣ�n-2����̨�׵��������Դ����Ƶ����ʣ��1��
	//����2��̨���ǵݹ����
	//qingwa��n-2��ͬ��
}
int main()
{
	int n = 0;
	int num = 0;
	printf("����������Ҫ����̨��:");
	scanf("%d", &n);
	num=qingwa(n);
	printf("һ����%d������", num);

	return 0;
}


















