#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1--ð������
//ʵ�ּ�--Ч�ʵ�--�����ȶ�

//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);//�������Ԫ�ظ���--���������Ҫѭ���Ĵ����� һ��ѭ������Ҫ�ȽϵĴ���
//	for (i = 0; i < n; i++)//һ����n��Ԫ��--��Ҫѭ��n��---ÿ��ѭ��һ������ֵһ���������ĩβ
//	{
//		int j = 0;
//		for (j = 1; j < n-i; j++)//ѭ����Ŀ����Ϊ�����һ����������Ҫ�Ƚϵ����ֵĸ���--�ر�Ҫע��(j<n-i)��i=0��ʱ
//			//������±��ǵ�9������������Ϊ�ǵ�10���Ӷ���j<n)��������---i��Ϊ�˼�ȥ�źõ���-
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)//��ӡ����õ�����
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//����2--��������
//ʵ�ּ򵥣������ȶ�
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < n; i++)//һ����n��Ԫ�أ�����ֻ��Ҫ���루n-1����Ԫ��
//		//�ӵڶ���Ԫ�ؿ�ʼ���룬���һ��Ԫ�رȽϽ��в���
//	{
//		int j = 0;
//		int tmp = arr[i];//����Ҫ�����Ԫ�ؽ��д����������бȽ�
//		for (j = i - 1; j >= 0; j--)//��ǰ���Ѿ��źõ�Ԫ�أ����һ�����п�ʼ�Ƚϣ�������
//		{
//			if (tmp < arr[j])//ŵ�����Ԫ�ر� �Ƚϵ�Ԫ��С--��ô����λ�ý���--�������ٺ�ǰ���Ԫ�رȽ�--ֱ����ǰһ��Ԫ�ش�ֹͣ�Ƚ�
//			{
//				int cop = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = cop;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//�ڲ�������Ļ����Ͻ����Ż�
//���ڲ�ѭ��ʱ����Ҫ��������飬�Ѿ����źõ��ˣ����Կ��Բ��ö��ַ����ң�Ч�ʸ���
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < n; i++)
//	{
//		int tmp = arr[i];
//		int left = 0;
//		int right = i - 1;
//		int mid = 0;
//		while (left <= right)//�ҵ������λ��
//		{
//			mid = (left + right) / 2;
//			if (tmp < arr[mid])
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				left = mid + 1;
//			}
//		}
//		for (int j = i; j > left; j--)//leftΪ�����λ�ã���left������������������
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[left] = tmp;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//����3--ѡ������
// Ч�ʷ�����Ҫ����ð������ģ��������ȶ�
//ÿһ���ش������������ѡ����С����󣩵��������뵽�Ѳ�����������������λ��ĩβ��

//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < n - 1; i++)//��n��Ԫ����Ҫ���򣬵���ֻ��Ҫ��n-1�������һ����ֱ�����ź����е�ĩβ������Ҫ������
//	{
//		int k = i;//����Ҫ�ŵ����±������
//		for (int j = i; j < n; j++)
//		{
//			if (arr[k] >= arr[j])
//			{
//				k = j;//Ŀ�����ҳ���Ҫ�ŵ���������С����
//			}
//		}
//		if (k != i)//�ҵ�����С����������λ�õĽ���
//		{
//			int tmp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = tmp;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//4.��������
//ѡ��һ����׼ֵ���ҳ���׼ֵλ�ã��������ݷ�Ϊ���࣬���ζ��������ݽ��д���

#include <stdio.h>

#define SIZE 6

//��������
//void quick_sort(int num[], int low, int high)
//{
//    int i, j, temp;
//    int tmp;
//
//    i = low;
//    j = high;
//    tmp = num[low];   //����Ϊ�м�ֽ��ߣ���߱���С���ұ߱�����,ͨ����һ��Ԫ���ǻ�׼��
//
//    if (i > j)  //����±�i�����±�j��������������
//    {
//        return;
//    }
//
//    while (i != j)
//    {
//        while (num[j] >= tmp && j > i)
//        {
//            j--;
//        }
//
//        while (num[i] <= tmp && j > i)
//        {
//            i++;
//        }
//
//        if (j > i)
//        {
//            temp = num[j];
//            num[j] = num[i];
//            num[i] = temp;
//        }
//    }
//
//    num[low] = num[i];
//    num[i] = tmp;
//
//    quick_sort(num, low, i - 1);
//    quick_sort(num, i + 1, high);
//}
//
//int main(int argc, char** argv)
//{
//    //����һ������
//    int num[] = {6,5,4,3,2,1};
//    int i;
//
//    //��������
//    int size = sizeof(num) / sizeof(num[0]);
//    for (i = 0; i < size; i++)
//    {
//        printf(" %d ", num[i]);
//    }
//
//    quick_sort(num, 0, size - 1);
//    printf("\n");
//
//    for (i = 0; i < size; i++)
//    {
//        printf(" %d ", num[i]);
//    }
//
//    return 0;
//}














































































































