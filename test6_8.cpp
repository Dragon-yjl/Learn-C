#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//int main()
//{
//	//错误示范
//	//int* const ip;//error const修饰指针变量本身，定义时必须初始化
//
//	int a = 10;
//	//ip = &a;      //error
//	//*************//
//	//正确写法
//	int a = 10, b = 20;
//	int* const ip = &a;//ok
//	*ip = 100;//ok
//	//ip = &b;//ip是const修饰的指针，无法进行写操作
//
//
//	printf("%d %p %d\n",*ip,ip,a);//100 00B6F8CC 10
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20;
//	int const * ip = NULL;
//	ip = &a;
//	printf("%d %p\n", *ip, ip);//10 003EF944
//
//	//*ip = 100;// error 指针本身可以改变，指向的值不能改变
//	
//	ip = &b;
//	printf("%d %p\n", *ip, ip);//20 003EF938
//		return 0;
//}

//
//int main()
//{
//	int a = 10,b = 20;
//	//const int * const ip;//error 初始化时必须要定义指针变量的值
//
//
//	const int* const ip = &a;
//	//第一个const修饰指向，第二个const修饰指针本身
//
//	int const* const ip1 = &b;
//	//*ip = 100;//error 不可以再修改指针指向的值
//	//ip = &b;//error  不可以再修改指针的指向
//
//	printf("%d  %p\n",*ip, ip);//10  004FFC74
//	printf("%d  %p\n", *ip1, ip1);//20  004FFC68
//	return 0;
//}


//int main()
//{
//
//	int a = 10;
//	const int b = 20;
//	int* ipa = &a;
//	const int* ipa1 = &a;
//
//	//int* ipb = &b;//error b是常变量，不能再取地址
//	const int* ipb1 = &b;
//	int* ipb2 = (int*)&b;
//
//	printf("%d %p\n",*ipa,ipa);//10 00B3FA40
//	printf("%d %p\n",*ipa1,ipa1);//10 00B3FA40
//	printf("%d %p\n", *ipb1, ipb1);//20 00B3FA34
//	printf("%d %p\n", *ipb2, ipb2);//20 00B3FA34
//	return 0;
//
//}


void  Left_Move_Ar(int* ar, int n)
{
	assert(ar != nullptr);

	int tmp = ar[0];
	for (int i = 0; i < n - 1; ++i)
	{
		ar[i] = ar[i + 1];
	}
	ar[n - 1] = tmp;
}

void Print_Ar(int* ar, int n)
{
	assert(ar != nullptr);
	for (int i = 0; i < n ; ++i)
	{
		printf("%d\n",ar[i]);
	}
}

void Right_Move_Ar(int* ar, int n)
{

	assert(ar != nullptr);
	int tmp = ar[n - 1];
	for (int i = n - 1; i > 0; --i)
	{
		ar[i] = ar[i-1];
	}
	ar[0] = tmp;
}
int main()
{
	const int n = 10;
	int ar[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Left_Move_Ar(ar, n);
	Right_Move_Ar(ar, n);
	Print_Ar(ar, n);
	/*for (int i = 0; i < n ; ++i)
	{
		printf("%d\n", ar[i]);
	}*/
	return 0;
}