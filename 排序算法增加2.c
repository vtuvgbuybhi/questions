#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.ð������
//�Ƚ����ڵ�����Ԫ��    --��  ����Ԫ�������򽻻�����λ�õ�Ԫ�� 
//ÿһ�����ڵ�Ԫ����ͬ���Ĳ���  --�� ��ôÿһ�˵�����     һ������һ������Ԫ�������
//��һ��ʱ��ֻ����һ�˵����Ԫ�ز���Ҫ���뵽��һ�˵ıȽ���

//void Bubblesort(int arr[], int k)
//{
//	for (int i = 0; i < k; i++)
//	{
//		int j = 0;
//		for (j = 0; j < k - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,4,6,7,10,1,-7,-6,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//ѡ������   
//������δ������������ҵ���С����Ԫ�أ������δ�����������ʼ��ĩβλ��
//�ڴ�ʣ�µ�δ�����Ԫ���м���Ѱ����С�����ֵ�����ҵ����������ڴ����������ĩβ����ǰ��

//void swap(int* a, int* b)//������Ԫ��λ��
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void selection_sort(int arr[], int sz)
//{
//	int i, j;
//	for (i = 0; i < sz-1; i++)
//	{
//		int min = i;
//		for (j = i + 1; j < sz; j++)//����δ�����Ԫ��
//		{
//			if (arr[j] < arr[min])//�ҵ�Ŀǰ����Сֵ
//			{
//				min = j;//����Сֵ���±��¼����
//			}
//		}
//		swap(&arr[min], &arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 2,4,6,7,10,1,-7,-6,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	selection_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//��������
//1--��������ĵ�һ��Ԫ�ؿ�ʼ����Ϊ��Ԫ�����Ѿ�����õ�Ԫ��
//2---��ȡ����һ��Ԫ�����Ѿ�����õ��������ɺ���ǰɨ��
//3--�������Ԫ�أ��Ѿ�����õ�Ԫ�أ�������Ԫ��  �����Ԫ������ƶ�����һλ��
//4---���ظ�3���裬ֱ���ҵ�����Ԫ�ش�С��Ȼ���С����Ԫ�ص�λ��
//5--������Ԫ�ز��뵽�ҵ���λ��

//void inserttion_sort(int arr[], int sz)
//{
//	int i, j,key;
//	for (i = 1; i < sz; i++)
//	{
//		key = arr[i];//����Ԫ�ر�������   --> Ҫ����Ԫ��С��������Ԫ�������һ����
//		//��ô���һ�������Ƶ����λ��
//		j = i - 1;
//		while (j >= 0 && arr[j] > key)//�ҵ���Ӧλ�õ��ж����������������������˵���ҵ��˲����λ��
//		{     
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,4,6,7,10,1,-7,-6,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	inserttion_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//4.ϣ������ ---���Բ���������Ż���Ч�����˼������ߣ�
//ֻҪ����Խ��Խ�ӽ�����   --����ô���������Ч�ʾͻ�Խ��   -��ϣ����������Ƚ�������Խ��Խ�������������Ϊ1ֱ���ò�������Ч�ʼ��ߣ�
//��������������Ĺ�����--��Ҳ���˲�������  --��ֻ��һ��λ�õ���   ���ӿ�ĸ��󣨲���Ҫһ��һ�εıȽ��ڵ�����

//void Shell_sort(int arr[], int sz)
//{
//	int gap = sz;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;//����ϣ������
//		int i = 0;
//		for (i = 0; i < sz - gap; i++)
//		{
//			int end = i;
//			int temp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > arr[end + gap])
//				{
//					arr[end + gap] = arr[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,4,6,7,10,1,-7,-6,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Shell_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//5.��������
//������������һ��������Ϊ��׼����һ��ѡ����ĵ�һ������
//�ڽ�����ֳ�����--��һ�Ѵ��ڻ�׼����һ��С�ڻ�׼��
//�ٽ������������ظ�����ķ���������������Խ��Խ�����õݹ��˼�룩

//void Quick_sort(int arr[], int star,int end)
//{
//	if (star >= end)
//	{
//		return 0;
//	}
//	int i = star;
//	int j = end;
//	int temp = arr[star];//�����׼��
//	while (i < j)
//	{
//		while (i < j && arr[j]>=temp)//���������ұȻ�׼��С����
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			arr[i] = arr[j];
//			i++;
//		}
//		while (i < j && arr[i] < temp)//���������ұȻ�׼������
//		{
//			i++;
//		}
//		if (i < j)
//		{
//			arr[j] = arr[i];
//			j--;
//		}
//	}
//	arr[i] = temp;
//	Quick_sort(arr, star, i - 1);
//	Quick_sort(arr, i + 1, end);
//}
//
//int main()
//{
//	int arr[10] = { 2,4,6,7,10,1,-7,-6,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Quick_sort(arr,0,sz-1);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}










































