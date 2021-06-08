#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//数组左移一位
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

//数组打印
void Print_Ar(int* ar, int n)
{
	assert(ar != nullptr);
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", ar[i]);
	}
}

//数组右移一位
void Right_Move_Ar(int* ar, int n)
{

	assert(ar != nullptr);
	int tmp = ar[n - 1];
	for (int i = n - 1; i > 0; --i)
	{
		ar[i] = ar[i - 1];
	}
	ar[0] = tmp;
}

//数组左移K位
void Left_Move_Ar_K(int* ar,int n,int k) 
{

	assert(ar != nullptr);
	k = k % n;
	for (int i = 0; i < k; ++i)
	{
		Left_Move_Ar(ar, n);
	}
}


//数组右移K位
void Right_Move_Ar_K(int* ar, int n, int k)
{
	assert(ar != nullptr);
	k = k % n;
	for (int i = 0; i < k; ++i)
	{
		Right_Move_Ar(ar, n);
	}


}
//int main()
//{
//	const int n = 10;
//	int ar[n] = { 1,2,3,4,5,6,7,8,9,10 };
//	//Left_Move_Ar(ar, n);
//	//Right_Move_Ar(ar, n);
//	//Left_Move_Ar_K(ar, n, 3);
//	Right_Move_Ar_K(ar, n, 7);
//	Print_Ar(ar, n);
//	/*for (int i = 0; i < n ; ++i)
//	{
//		printf("%d\n", ar[i]);
//	}*/
//	return 0;
//}


int my_strlen(char* stra)
{

	assert(stra != nullptr);
	int tmp = 0;
	while (*stra++ != '\0')
	{
		//*stra++;
		tmp++;
	}
	return tmp;
}



//int main()
//{
//
//	char stra[20] = { "yhping" };
//	int len = my_strlen(stra);
//	int size = sizeof(stra);
//	printf("%d\n",len);//6
//	printf("%d\n",size);//20
//	return 0;
//}


//把src里面的内容拷贝到dest里面，实现字符串数组之间的拷贝
void my_strcpy(char* dest, const char* src)
{

	assert(dest != nullptr && src != nullptr);

	//char* p = dest;
		/*while (*src != '\0')
		{
			*dest++ = *src++;
		
		}*/
	while (*dest++ = *src++);//与上面while循环等价
		*dest = '\0';

}


//字符串数组之间的拷贝，有返回值，可以实现递归
char* my_strcpy1(char* dest, const char* src)

{
	assert(dest != nullptr && src != nullptr);
	char* p = dest;
	while (*src !='\0') 
	{
		*p++ = *src++;
	}
	*p = '\0';
	return dest;
}


//字符串之间比较大小
int my_strcmp(const char* first,const char* second)
{
	assert(first != nullptr && second != nullptr);

	while (*first!='\0' && *second!='\0')
	{
		if (*first != *second) 
		{
			break;
		}
		first++;
		second++;
	}
	return (*first - *second);
}

int my_strcmp1(const char* first, const char* second)

{
	assert(first!=nullptr && second !=nullptr);
	int k = 0;
	while ((k = *first - *second) == 0 && *first++ && *second++);

		return k;
}


int main()
{

	char stra[20] = { "yhping" };
	char strb[20] = { "hello" };
	char strc[10] = {};
	//my_strcpy(stra, strb);
	my_strcpy(strc, stra);
	printf("%s\n",strc);//yhping
	printf("%s\n",stra);//yhping

	my_strcpy1(strc, my_strcpy1(strb, stra));
	printf("%s\n",stra);//yhping
	printf("%s\n", strb);// yhping
	printf("%s\n", strc);//yhping

	char str1[] = "gutti";
	char str2[] = "gunai";
	int a = my_strcmp(str1, str2);
	int b = my_strcmp1(str1, str2);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;

}