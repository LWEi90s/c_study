#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
	//ָ����Ǳ�����������ŵ�ַ�ı���
/*	int a = 10;
	int* p = &a*/;//��a�ĵ�ַ�����p�����У�p����һ��ָ�������ָ��Ĵ�С-��32λ��4���ֽڣ���64λ����8���ֽ�

//ָ���ָ������
	/*int a = 0x11223344;*/
//ָ�����͵��������壺1.ָ�����;�����ָ�����ͽ�����ʱ�ܷ��ʿռ�Ĵ�С��   2.ָ�����;�����ָ��+1���߶�Զ��������ָ��Ĳ�����
// int*p; *p-4���ֽ�    char*p; *p-1���ֽ�   double*p; *p-8���ֽ�          int*p��p+1-->4    char*p; p+1-->1   double*p; p+1-->8   
	//int* p = &a;
	//char* pc = &a;

	//printf("%p\n", p);
	//printf("%p\n", p+1);//+1���ƽ��һ��int����4���ֽ�
	//printf("%p\n", pc);
	//printf("%p\n", pc+1);//+1���ƽ��һ��char����1���ֽ�

	////����
	//int arr[10] = { 0 };
	//	int* p = &arr;//����������Ԫ�ص�ַ
	//	for (int i = 0; i < 10; i++)
	//	{
	//		*(p + 1) = 1;//��ÿ�������Ա��Ϊ1
	//	}


//Ұָ�룺ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ��
	//1.δ��ʼ��
	//int a ;//�ֲ���������ʼ����Ĭ�������ֵ
	//int* p = &a;
	//printf("%p\n", p);//����ĵ�ַ�������

	//int arr[10] = { 0 };
	//int* p = &arr;
	////2.ָ��Խ��
	//for (int i = 0; i < 12; i++)
	//{
	//	p++;
	//}

	////3.ָ��ָ����ڴ�ռ��ͷ�
	//int* test()
	//{
	//	int a = 10;
	//	return &a;

	//}
	//int main()
	//{
	//	int* p = test();
	//	*p = 20;

	//	printf("%p\n", p);


//int main()
//{
	/*int a = 10;
	int* p1 = NULL;*///����֪��ָ��ָ��ʲô��ʱ��ֱ�Ӹ�ֵNULL����ָ��ΪNULL��ʱ�����ܷ�����

	//ָ������  ָ��+-�������� ָ��-ָ������ ָ��Ĺ�ϵ����
	//1.ָ��+-��������
	//int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int* p = &arr;
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d\n", *p);
	//	p++;
	//}

	//����
//#define N 5
//int main()
//{
//	float values[N] = {0,1,2,3,4};
//	float* p;
//	for (p = &values[0]; p < &values[N]; )
//	{
//		*p++ = 0;
//		printf("%f\n", *p);
//	}

//2.ָ��-ָ������ 
	//2.1�У�strlen-���ַ�������
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{	
//	//int arr[] = {0,1,2,3,4};
//	//printf("%d\n", &arr[4] - &arr[0]);//ָ��-ָ��õ��м�Ԫ�صĸ���
//
//	//strlen-���ַ�������
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);

//3.ָ��Ĺ�ϵ����  �Ƚϴ�С
//int main()
//{
	//#define N 5
	//int main()
	//{
	//	float values[N] = {0,1,2,3,4};
	//	float* p;
	//	for (p = &values[N]; p > &values[0]; )
	//	{
	//		*--p = 0;
	//		
	//	}//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�


	//int arr[10] = { 0 };
	// 
	//printf("%p\n", arr);//���󲿷�������������Ԫ�ص�ַ   &arr ������arr����ĵ�ַ    sizeof(������) ���������������Ĵ�С
	//printf("%p\n", arr + 1);
	//
	//printf("%p\n", &arr);//��������ĵ�ַ
	//printf("%p\n", &arr+1);//����+1,������������

	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[0]+1);

	//��ӡ1-9
	//int arr[10] = {0};
	//int* p = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *(p + i));
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%p===========%p\n", p + i, &arr[i]);
	//}


int main()
{
	//int a = 10;
	//int* p = &a;//pa����һ��ָ��
	//int** ppa = &p;//ppa���Ƕ���ָ��

	//printf("%d\n", **ppa);


	//ָ������-���ָ�������   ����ָ��-ָ��
	int a = 1;
	int b = 2;
	int* pa = &a;
	int* pb = &b;
	int* arr[2] = {&a,&b};//ָ������

	for (int i = 0; i < 2; i++)
	{
		printf("%d\n", *(arr[i]));
	}


	return 0;

}