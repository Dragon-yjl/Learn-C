#include<stdio.h>
#include<stdlib.h>
#include <cassert>

#define ARSIZE 100
//
//void Init_Ar(int* br,int n)
//{
//	assert(br != nullptr);
//	int table[ARSIZE + 1] = {};
//	int i = 0;
//
//	while (i < n)
//	{
//
//		int tmp = rand() % 100 + 1;
//		if (table[tmp] == 0)
//		{
//			br[i] = tmp;
//			++i;
//			table[tmp] = 1;
//		}
//	}
//
//}
//
//int main() 
//{
//	const int n = 100;
//	int ar[n] = {};
//	Init_Ar(ar,n);
//	return 0;
//}

//
//void Swap_Int(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	char *x = nullptr;
//	int* y = NULL;
//	printf("%p\n",y);
//	printf("%p\n",x);
//	int a = 10;
//	int b = 20;
//	Swap_Int(&a, &b);
//	printf("a = %d b = %d",a,b);
//	return  0;
//}

//
//
//int main()
//{
//	int ar[] = { 12,23,34,45,56, };
//	int* p = ar;
//	int x = 0;
//	int y = 0;
//	x = *p++;//先x = *p  =>   12,在p++   23的地址
//	y = *p;//23
//	printf("%d %d\n",x,y);
//	x = ++*p;//先*p => 23,在23++  =>24  数组里面的第二个元素也变成了24
//	y = *p;//24
//	printf("%d %d\n", x, y);
//	x = *++p;//先++p  =>  34的地址    再*P  => 34
//	y = *p;//34
//	printf("%d %d\n", x, y);
//	return 0;
//
//}

void my_strcpy(char* dest, char* src)
{

	while (*src != '\0')
	{
		*dest = *src;//*dest++ = *src++;三句等于这一句
		dest++;
		++src;
		
	}
	*dest = '\0';
	

}

//赋值语句有返回值，返回赋值后的结果，更高的层面赋值自加自减运算相当于一个函数
// 
// 
//while(*dest++ = *src++)
//相当于上面函数中的一个while循环


//void my_strcpy(char* dest, char* src)
//{
//	int i = 0;
//	while (src[i] != '\0')
//	{
//		//*(dest + i) = *(src + i);
//		dest[i] = src[i];
//		++i;
//		
//		
//	}
//
//	dest[i] = '\0';
//	//printf("%c", dest[i]);
//
//	//printf("\n");
//}

int main() 
{
	char stra[20] = { "yhping" };
	char strb[20] = {};
	my_strcpy(strb, stra);
	printf("%s\n", strb);
	return 0;

}
