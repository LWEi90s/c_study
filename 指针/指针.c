#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
	//指针就是变量，用来存放地址的变量
/*	int a = 10;
	int* p = &a*/;//将a的地址存放在p变量中，p就是一个指针变量：指针的大小-在32位是4个字节，在64位中是8个字节

//指针和指针类型
	/*int a = 0x11223344;*/
//指针类型的意义意义：1.指针类型决定了指针类型解引用时能访问空间的大小；   2.指针类型决定了指针+1能走多远（决定了指针的步长）
// int*p; *p-4个字节    char*p; *p-1个字节   double*p; *p-8个字节          int*p：p+1-->4    char*p; p+1-->1   double*p; p+1-->8   
	//int* p = &a;
	//char* pc = &a;

	//printf("%p\n", p);
	//printf("%p\n", p+1);//+1向后平移一个int类型4个字节
	//printf("%p\n", pc);
	//printf("%p\n", pc+1);//+1向后平移一个char类型1个字节

	////例子
	//int arr[10] = { 0 };
	//	int* p = &arr;//数组名，首元素地址
	//	for (int i = 0; i < 10; i++)
	//	{
	//		*(p + 1) = 1;//将每个数组成员改为1
	//	}


//野指针：指针指向的位置是不可知的，随机的，不正确的
	//1.未初始化
	//int a ;//局部变量不初始化，默认是随机值
	//int* p = &a;
	//printf("%p\n", p);//输出的地址是随机的

	//int arr[10] = { 0 };
	//int* p = &arr;
	////2.指针越界
	//for (int i = 0; i < 12; i++)
	//{
	//	p++;
	//}

	////3.指针指向的内存空间释放
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
	int* p1 = NULL;*///当不知道指针指向什么的时候，直接赋值NULL，当指针为NULL空时，不能访问它

	//指针运算  指针+-整数运算 指针-指针运算 指针的关系运算
	//1.指针+-整数运算
	//int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int* p = &arr;
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d\n", *p);
	//	p++;
	//}

	//例子
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

//2.指针-指针运算 
	//2.1列：strlen-求字符串长度
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
//	//printf("%d\n", &arr[4] - &arr[0]);//指针-指针得到中间元素的个数
//
//	//strlen-求字符串长度
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);

//3.指针的关系运算  比较大小
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
	//	}//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较


	//int arr[10] = { 0 };
	// 
	//printf("%p\n", arr);//绝大部分数组名就是首元素地址   &arr 是整个arr数组的地址    sizeof(数组名) 计算的是整个数组的大小
	//printf("%p\n", arr + 1);
	//
	//printf("%p\n", &arr);//整个数组的地址
	//printf("%p\n", &arr+1);//数组+1,跳过整个数组

	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[0]+1);

	//打印1-9
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
	//int* p = &a;//pa就是一级指针
	//int** ppa = &p;//ppa就是二级指针

	//printf("%d\n", **ppa);


	//指针数组-存放指针的数组   数组指针-指针
	int a = 1;
	int b = 2;
	int* pa = &a;
	int* pb = &b;
	int* arr[2] = {&a,&b};//指针数组

	for (int i = 0; i < 2; i++)
	{
		printf("%d\n", *(arr[i]));
	}


	return 0;

}