#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1--冒泡排序
//实现简单--效率底--排序稳定

//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);//求出数组元素个数--方便计算需要循环的次数及 一次循环所需要比较的次数
//	for (i = 0; i < n; i++)//一共有n个元素--需要循环n次---每次循环一次最大的值一定在数组的末尾
//	{
//		int j = 0;
//		for (j = 1; j < n-i; j++)//循环的目的是为了求出一趟排序所需要比较的数字的个数--特别要注意(j<n-i)当i=0；时
//			//数组的下标是到9，很容易误以为是到10，从而（j<n)产生错误---i是为了减去排好的数-
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)//打印排序好的数组
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//方法2--插入排序
//实现简单，排序稳定
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < n; i++)//一共有n个元素，不过只需要插入（n-1）个元素
//		//从第二个元素开始插入，与第一个元素比较进行插入
//	{
//		int j = 0;
//		int tmp = arr[i];//将需要插入的元素进行存起来，进行比较
//		for (j = i - 1; j >= 0; j--)//从前面已经排好的元素，最后一个进行开始比较，来插入
//		{
//			if (tmp < arr[j])//诺插入的元素比 比较的元素小--那么进行位置交换--交换完再和前面的元素比较--直到比前一个元素大，停止比较
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

//在插入排序的基础上进行优化
//在内层循环时，需要插入的数组，已经是排好的了，所以可以采用二分法查找，效率更高
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
//		while (left <= right)//找到插入的位置
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
//		for (int j = i; j > left; j--)//left为插入的位置，在left插入后后面的依次向后移
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

//方法3--选择排序
// 效率方面是要高于冒泡排序的，不过不稳定
//每一次重待排序的数据中选出最小（最大）的数，加入到已部分完成排序的数列首位（末尾）

//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < n - 1; i++)//有n个元素需要排序，但是只需要排n-1个，最后一个数直接在排好数列的末尾，不需要对它排
//	{
//		int k = i;//将需要排的数下标存起来
//		for (int j = i; j < n; j++)
//		{
//			if (arr[k] >= arr[j])
//			{
//				k = j;//目的是找出需要排的数组中最小的数
//			}
//		}
//		if (k != i)//找到的最小的数，进行位置的交换
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

//4.快速排序
//选出一个基准值，找出基准值位置，并把数据分为两类，依次对两边数据进行处理

#include <stdio.h>

#define SIZE 6

//快速排序
//void quick_sort(int num[], int low, int high)
//{
//    int i, j, temp;
//    int tmp;
//
//    i = low;
//    j = high;
//    tmp = num[low];   //任命为中间分界线，左边比他小，右边比他大,通常第一个元素是基准数
//
//    if (i > j)  //如果下标i大于下标j，函数结束运行
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
//    //创建一个数组
//    int num[] = {6,5,4,3,2,1};
//    int i;
//
//    //输入数字
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














































































































