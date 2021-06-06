#include<stdio.h>
#include <cassert>


// void Left_Move_Ar(int* ar,int n)
//{
//	assert(ar != nullptr);
//	int tmp =ar[0];
//	int i = 0;
//	for (i = 0; i < n-1; ++i)
//	{
//		ar[i] = ar[i + 1];
//	}
//	ar[i-1] = tmp;
//}
//
//
// void Right_Move_Ar(int* ar, int n)
// {
//
//	 assert(ar != nullptr);
//	 int tmp = ar[n - 1];
//	 int i = 0;
//	 for (i = n - 1; i > 0; --i)
//	 {
//		 ar[i] = ar[i - 1];
//
//	 }
//	 ar[0] = tmp;
// }
//void Printf(int ar[], int n)
//{
//	assert(ar != nullptr);
//	int i = 0;
//	for (i = 0; i < n-1; ++i)
//	{
//		printf("%d\n", ar[i]);
//	}
//}
//
//int main()
//{
//	const int n = 10;
//	int ar[n] = { 12,23,34,45,56,67,78,89,90,100 };
//	Left_Move_Ar(ar, n);
//	//Right_Move_Ar(ar, n);
//	Printf(ar, n);
//
//	//Lest_Move_Ar_K(ar, n, k);
////	Lest_Move_Ar_K(ar, n, k);
//
//	return 0;
//}

int my_strlen(const char* str)
{
	assert(str != nullptr);
	int i = 0;
	//while (str[i] != '\0')//6
	//while(str[i++]!='\0')//7
	while(str[++i]!='\0')
	{
		++i;
	}
	return i;
}

int main()
{
	char stra[20] = {"yhping"};
	int len = my_strlen(stra);
	int size = sizeof(stra);

	printf("len: %d \n",len);
	printf("size: %d \n",size);
	return 0;
}