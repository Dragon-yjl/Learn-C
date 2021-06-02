#include<stdio.h>
#include<stdlib.h>
#include <cassert>
//
//int main() 
//{
//	int ar[5] = { 1,2,3,4,5 };
//	printf("0x%p\n", ar);//0x008FFA30
//	printf("0x%p\n",&ar[0]);//0x008FFA30
//	printf("0x%p \n",&ar);//0x008FFA30
//	printf("0x%p \n", ar+1);//0x00F1FD74
//	printf("%d \n", *ar);//1
//	printf("%d \n",*ar+1);//2
//	printf("%d \n", *(ar + 4));//5
//	printf("%d \n", ar[4]);//5
//	return 0;
//}
//
//int main()
//{
//	const int n = 5;
//	int ar[5] = { 1,2,3,4,5 };
//	int* p = ar;
//	for (int i = 0; i < n; ++i)
//	{
//		printf("0x%p %d %d %d %d\n",p+i,*p+i,p[i],i[ar],ar[i]);
//		//printf("%d",i[ar]);
//	}
//}

//
//int main()
//{
//	const int n = 5;
//	int ar[n] = { 1,2,3,4,5 };
//
//	int* pf = &ar[0];
//
//	int* pl = &ar[4];
//
//	int* pe = &ar[5];
//
//	printf("(pl - pf): %d\n",(pl - pf));//4
//
//	printf("(pe - pf): %d\n", (pe - pf));//5
//
//	return 0;
//}

//int main()
//{
//	const int n = 5;
//	int ar[n] = { 1,2,3,4,5 };
//
//	int* p = NULL;
//	for (p = &ar[0]; p < &ar[n]; ++p)
//	{
//		printf("0x%p %d\n",p,*p);
//
//	}
//	return 0;
//}


//int main() {
//	int ar[] = { 10, 20, 30, 40, 50 };
//	int* p = ar;
//	printf("%d\n", *p+1); // 11
//	printf("%d\n",*ar+1);//11
//	printf("0x%p 0x%p",p+1,ar+1);
//	return 0;
//}


//函数递归实现fibonacci数列
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//
//	}
//	else
//	{
//
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

//二分查找

int FindValue(int* br, int n, int val)
{
	assert(br != nullptr);
	int left = 0;
	int right = n - 1;
	int mid = 0;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (val < br[mid])
		{
			
			right = mid - 1;
		}
		else if (val > br[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;

}
int main()
{
	const int n = 10;
	int ar[n] = { 12,23,34,45,56,67,78,89,90,100 };
	int val = 0;
	scanf_s("%d",&val);
	int s  = FindValue(ar, n, val);
	printf("%d",s);
	return 0;
}