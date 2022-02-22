#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
	//操作符详解2
	//short s = 0;
	//int a = 10;

	//printf("%d\n", sizeof(s = a + 5));//s说了算，真能用short来计算，结果是2
	//printf("%d\n", s);//0


	//~
	//int a = 0;
	//printf("%d\n", ~a);//~a 按位取反

	//前置++：先++后使用

/*	int a = (int)3.14;*///强制转换，将3.14转换为int类型

	//练习1
	//void test1(int arr[])//接受地址的是指针，大小是4个字节
	//{
	//	printf("%d\n", sizeof(arr));
	//}
	//void test2(int ch[])
	//{
	//	printf("%d\n", sizeof(ch));
	//}

	//int main()
	//{
	//int arr[10] = { 0 };
	//char ch[10] = { 0 };

	//printf("%d\n", sizeof(arr[10]));//4
	//printf("%d\n", sizeof(arr));//40 单独数组名放在sizeof里面是计算整个数组大小4*10
	//printf("%d\n", sizeof(ch));//10

	//test1(arr);//4  数组在传递参数过去的时候，真正传递的只是首元素的地址
	//test2(ch);//4



//int main()
//	{
	//关系操作符
	//逻辑操作符
	//int a = 3;
	//int b = 5;
	//int c = a && b;//&&左边如果是0，&&右边就不用进行下去了

	//printf("%d\n", c);

	//int d = 0 || a;// ||左边如果是真，后面就不用进行计算了

	//printf("%d\n", d);

	//条件操作符，三目运算符
	//(a>b)?a:b
 //   int a = 0;
	//int b = 2;
	//int max = (a>b) ? a :b ;

	//printf("%d\n", max);


	////逗号表达式，从左向右依次计算，整个表达式的结果是最后一个表达式的结果
	//int a = 0;
	//int b = 1;
	//int c = (a = a + b, a, a > b, b += a);

	//printf("%d", c);//2

//
////结构体操作符
//struct stu
//	{
//		char name;
//		int age;
//		char id;
//	};
//int main()
//	{
//	struct stu s1 = { "lw",23,"20190879" };
//	printf("%d\n", s1.age);
//
//	struct stu *p = &s1;
//	printf("%d\n", (*p).age);
//
//	printf("%d\n", p->age);//p指针箭头指向age:结构体指针->成员名





int main()
{



	return 0;
}