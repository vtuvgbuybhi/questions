#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//冒泡排序
//void Bubblesort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换两个元素
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

//上面的冒泡排序只能排序整形数组---但是基本上所有不同；类型的数组的比较实现思路都是冒泡排序的思想

//修改冒泡排序--来实现任意类型数组的比较


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
//			//两个元素进行比较
//
//			//强制转换成（char*）类型的指针-------void类型的指针不支持加减
//
//			//（char*）类型的指针+1一次就是跳一个字节
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				//交换
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
//	//作为程序员肯定是知道自己所需要排序数组的类型
//	//知道这个数组需要怎样的比较思路
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
//	struct stu s[3] = { {"gbyiuh",20},{"fg",18},{"fdvtgy",45} };//结构体数组
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



































































