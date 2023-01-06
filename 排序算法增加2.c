#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.冒泡排序
//比较相邻的两个元素    --》  若两元素逆序，则交换两个位置的元素 
//每一对相邻的元素做同样的操作  --》 那么每一趟的下来     一定是这一趟最大的元素排最后
//下一趟时，只有上一趟的最大元素不需要参与到这一趟的比较中

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


//选择排序   
//首先在未排序的数组中找到最小（大）元素，存放在未排序的序列起始或末尾位置
//在从剩下的未排序的元素中继续寻找最小或最大值，将找到的数排序在待排序数组的末尾或最前面

//void swap(int* a, int* b)//交换两元素位置
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
//		for (j = i + 1; j < sz; j++)//遍历未排序的元素
//		{
//			if (arr[j] < arr[min])//找到目前的最小值
//			{
//				min = j;//将最小值的下标记录下来
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


//插入排序
//1--》从数组的第一个元素开始，认为改元素是已经排序好的元素
//2---》取出下一个元素在已经排序好的序列中由后向前扫描
//3--》如果该元素（已经排序好的元素）大于新元素  ，则该元素向后移动到下一位置
//4---》重复3步骤，直到找到与新元素大小相等或者小于新元素的位置
//5--》将新元素插入到找到的位置

//void inserttion_sort(int arr[], int sz)
//{
//	int i, j,key;
//	for (i = 1; i < sz; i++)
//	{
//		key = arr[i];//将新元素保存下来   --> 要是新元素小于已排序元素里最后一个数
//		//那么最后一个数将移到这个位置
//		j = i - 1;
//		while (j >= 0 && arr[j] > key)//找到对应位置的判断条件，不满足这个条件，说明找到了插入的位置
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


//4.希尔排序 ---》对插入排序的优化（效率有了极大的提高）
//只要数组越来越接近有序   --》那么插入排序的效率就会越高   -》希尔排序就是先将数组变得越来越有序（最后增量减为1直接用插入排序效率极高）
//在让数组变的有序的过程中--》也用了插入排序  --》只是一次位置调换   步子跨的更大（不需要一次一次的比较在调换）

//void Shell_sort(int arr[], int sz)
//{
//	int gap = sz;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;//调整希尔增量
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


//5.快速排序
//从数列中挑出一个数，作为基准数（一般选数组的第一个数）
//在将数组分成两堆--》一堆大于基准数，一堆小于基准数
//再将两堆数，再重复上面的方法（这样数会变的越来越有序，用递归的思想）

//void Quick_sort(int arr[], int star,int end)
//{
//	if (star >= end)
//	{
//		return 0;
//	}
//	int i = star;
//	int j = end;
//	int temp = arr[star];//保存基准数
//	while (i < j)
//	{
//		while (i < j && arr[j]>=temp)//从右往左找比基准数小的数
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			arr[i] = arr[j];
//			i++;
//		}
//		while (i < j && arr[i] < temp)//从左往右找比基准数大数
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










































