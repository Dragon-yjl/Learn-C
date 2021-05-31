#include<stdio.h>
#include<stdlib.h>
#include <cassert>

//
//void Init_Ar(int* br,int n)
//
//{
//	assert(br != nullptr);
//	for (int i = 0; i < n; i++)
//	{
//		br[i] = rand() % 100 + 1;
//
//	}
//
//}
//
//void Print_Ar(int* br,int n) 
//{
//	assert(br != nullptr);
//	for (int i = 0;i<n;i++)
//	{
//		printf("%4d ", br[i]);
//		if ((i + 1) % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//}
//
//void BubberSort(int* br,int n) 
//{
//	assert(br != nullptr);
//	for (int i = 0; i < n - 1; ++i)
//	{
//		for (int j = 0; j < n - 1 - i; ++j)
//		{
//			if (br[j] > br[j + 1]) 
//			{
//				int tmp = br[j];
//				br[j] = br[j + 1];
//				br[j + 1] = tmp;
//			}
//		}
//
//	}
//}
//
//int main() 
//{
//	const int n = 100;
//	int ar[n] = {};
//	Init_Ar(ar, n);
//	printf("排序前：\n");
//	Print_Ar(ar,n);
//	printf("****************\n");
//	BubberSort(ar, n);
//	printf("排序后：\n");
//	Print_Ar(ar, n);
//	return 0;
//}



int FindValue(int* br, int n, int val)
{

	assert(br != nullptr);

	int left = 0;
	int right = n - 1;
	int mid = 0;
	int pos = -1;
	while (left <= right)
	{
		//mid = (left + right) / 2;
		mid = left + (right - left) / 2;
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

			pos = mid;
			break;

		}

	}
	return pos;
}



int main()
{
	int ar[] = { 12,23,34,45,56,67,78,89,90,100 };
	int n = sizeof(ar) / sizeof(ar[0]);
	int val = 0;
	scanf_s("%d",&val);
	int pos = FindValue(ar,n,val);
	printf("%d\n", pos);
	return 0;

}