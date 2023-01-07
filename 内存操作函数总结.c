#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//���Ƚ���   strcpy   ��  strncpy�� �÷���ʵ��

//strcpy   -->  �����ַ����ĸ��ƺ���  char*strcpy��char*dest��char*src��
//��srcָ����ַ������Ƶ�dest��   ����destָ�����ʼ��ַ
//ע�⿽����Ŀ�ĵر����ܹ����ɿ������ַ�����С   ����Ŀ���ַ�����'\0'Ҳ�´����Ŀ�ĵ���

//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "fvtu";
//	char arr2[20] = "vyutgbuy";
//	//strcpy(arr2, arr1);
//	char*ret=my_strcpy(arr2, arr1);
//	printf("%s\n", ret);
//	return 0;
//}

//strncpy   -->  char*strncpy(char*dest,char*src,size_t n)
//��srcָ����ַ���ǰn���ַ����Ƶ�destָ���������     
//��src�ĳ���С��n    ��'\0'
//��src�ĳ��ȴ���n   ���Ὣ���ַ��Զ��ӵ�ĩβ

//char* my_strncpy(char* dest, char* src, int  n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (n&&(* dest++ = *src++))
//	{
//		n--; 
//	}
//	if (n)
//	{
//		while (--n)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "fvytugbgy7g8";
//	char arr2[] = "uybhj";
//	strncpy(arr1, arr2, 3);
//	//char* ret = my_strncpy(arr1, arr2, 7);
//	return 0;
//}


//�ַ���׷�Ӻ���   --�� strcat    ��   strncat

//strcat  �������ַ���׷�Ӻ�����Ҳ������Ŀ�ĵ��ַ�����׷��һ���ַ���
//Ŀ�ĵصĿռ�һ��Ҫ�㹻��  -->�����Ļ�����
//Ŀ�ĵ�ĩβ��'\0'�ᱻ����  ��  Դͷ��'\0'�ᱻ����

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	//strcat(arr1, arr2);
//	char* ret = my_strcat(arr1, arr2);
//	return 0;
//}


//strncat   --> ���ַ���src�Ŀ�ͷ����n���ַ�����dest�ַ�����β��
//dest Ҫ���㹻�Ŀռ�
//�ַ���׷����ɺ���׷��'\0'
//���׷�ӳ��ȴ���src���� --> ����srcȫ��׷�ӵ�destβ��
//���׷�ӳ���С��dest����--����ô��׷��n���ַ���ɺ���׷��'\0'

//char* my_strncat(char* dest, char* src, int n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (n && (*dest++ = *src++))
//	{
//		n--;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "vbyub";
//	char arr2[] = "buyihbi";
//
//	//strncat(arr1, arr2, 3);
//
//	my_strncat(arr1, arr2, 5);
//	return 0;
//}



//memcpy   ��  memmove    ����

//memcpy   ��srcָ����ڴ��ַ����ʼλ�ÿ���n���ֽڵ�dest��ָ����ڴ���ʼλ��
//�ر�ע�����srcָ����ڴ���������destָ����ڴ������ص�--������������ܱ�֤�����ص������ڿ���֮ǰ��������
//����ԭ������

//void* my_memcpy(void* dest, const void* src, int n)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (n--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int b[3] = { 4,5,6 };
//	//memcpy(a, b, 8);
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//	my_memcpy(a, b, 12);
//	return 0;
//}

//memcpy  ��  strcpy ������

//                        memcpy                       strcpy
//-----------------------------------------------------------------------
//|  ���Ƶ�    |    ���Ը�������������        |     ֻ�ܸ����ַ���      |
//| ���ݲ�ͬ   |                              |                         |
//-----------------------------------------------------------------------
//| ���Ƶ�    |  �Ǹ���3����������            |  ���������Ƶ��ַ���'\0'  |
//|  ����     |   ���Ƶĳ���                  |   �Ž���                 |
//------------------------------------------------------------------------
//|  ��;     |����������������ʱ��           |    �����ַ���ʱ����      |
//|  ��ͬ     |                               |                          |
//------------------------------------------------------------------------


//mommove   ���memcpy�����ڴ���ӵ����

//void* my_memmove(void* dest, const void* src, int count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*) src + 1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//
//	}
//
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,9,10 };
//	//memmove(arr1 + 2, arr1, 12);
//	my_memmove(arr1 + 2, arr1, 12);
//	return 0;
//}








