#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//ð������
//void Bubblesort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//��������Ԫ��
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//void test1()
//{
//	int arr[10] = { 4,3,6,7,2,1,9,8,10,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//
//int main()
//{
//	test1();
//	return 0;
//}

//�����ð������ֻ��������������---���ǻ��������в�ͬ�����͵�����ıȽ�ʵ��˼·����ð�������˼��

//�޸�ð������--��ʵ��������������ıȽ�


//void swap(char* buf1, char* buf2,int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//int cmp_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void Bubblesort(void*base,int sz,int width,int(*cmp)(void* e1, void* e2))
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�ؽ��бȽ�
//
//			//ǿ��ת���ɣ�char*�����͵�ָ��-------void���͵�ָ�벻֧�ּӼ�
//
//			//��char*�����͵�ָ��+1һ�ξ�����һ���ֽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				//����
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test1()
//{
//	int arr[10] = { 4,3,6,7,2,1,9,8,10,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��Ϊ����Ա�϶���֪���Լ�����Ҫ�������������
//	//֪�����������Ҫ�����ıȽ�˼·
//
//	Bubblesort(arr, sz,sizeof(arr[0]),cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//
//void cmp_stu_age(void* e1, void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void test2()
//{
//	struct stu s[3] = { {"gbyiuh",20},{"fg",18},{"fdvtgy",45} };//�ṹ������
//	int sz = sizeof(s) / sizeof(s[0]);
//	Bubblesort(s, sz, sizeof(s[0]), cmp_stu_age);
//}
//
//
//int main()
//{
//	test1();
//	return 0;
//}



































































