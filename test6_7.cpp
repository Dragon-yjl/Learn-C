#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
//
//int main()
//{
//	const int  a = 10;
//	//int* p = &a;//通过普通指针会修改它的值，所以编译不通过
//	int b = 10;
//	int* p = &b;
//	const int* p1 = &b;
//	const int* p2 = &a;
//
//	b = 0;
//
//	int* ip = (int*)&a;//强制类型转换
//	*ip = 100;
//	b = a;
//
//	printf("&a => %08x a => %d \n",&a,a);///10
//	printf("&b => %08x b => %d \n", &b, b);//10
//	printf("ip => %08x *ip => %d \n", ip ,*ip);//100
//
//	return 0;
//}

//
//int main()
//{
//	char buff[20] = {};
//	int a = 10, b = 20;
//	int* p = (int*)buff;
//
//	*p = a;
//	p = p + 1;
//	*p = b;
//
//
//	return 0;
//
//}

//无类型指针可以存放任何类型地址，也可称之为泛型指针

//无类型指针不能+1，没有统一标准
//无类型指针无法解析地址
//int main()
//{
//	int a = 10;
//	double  dx = 12.23;
//	char ch = 'a';
//	int ar[10] = {12,23,34,45,456,76,7,6};
//	void* vp = nullptr;
//	vp = &a;
//	vp = &dx;
//	vp = &ch;
//	vp = &ar;
//	
//	int* ip = (int*)vp;//要想把vp里的值吐出来，就得强制转换滚
//
//	return 0;
//}

//struct Student
//{
//	char s_id[20];
//	char s_name[20];
//	char s_sex[8];
//	char s_age;
//
//};//32
//
//void my_memset(void* ar, int val, size_t size)
//{
//	assert(ar != nullptr);
//	char* cp = (char*)ar;
//	for (int i = 0; i < size; ++i)
//	{
//		cp[i] = val;
//	}
//}
//int main()
//{
//	const int n = 10;
//	int ar[n];
//	double dr[n];
//	struct Student stdr[n];
//	my_memset(ar, 0, sizeof(int) * n);
//	my_memset(dr, 0, sizeof(double) * n);
//	my_memset(stdr, 0, sizeof(struct Student) * n);
//	return 0;
//}


void my_memmove(void* dest, const void* src, size_t size)//用void使其泛型

{
	assert(dest != nullptr && src != nullptr);
	char* cp1 = (char*)dest;
	char* cp2 = (char*)src;
	for (int i = 0; i < size; ++i)
	{
	    *(cp1+i) = *(cp2+i);
	}



}

int main()
{

	char stra[10] = "yhping";
	char strb[10];
	int ar[10] = { 12,23,34,45,56,67,78,89,90,100 };
	int br[10];
	my_memmove(strb, stra, 10);
	my_memmove(br,ar,sizeof(int)*5);
	printf("");
}