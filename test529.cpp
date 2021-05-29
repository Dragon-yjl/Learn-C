#include<stdio.h>
#include<stdlib.h>
#include <cassert>


//冒泡排序
void BubberSort(int* br,int n) {
	assert(br != nullptr);

	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (br[j] > br[j + 1])
			{
				int tmp = br[j]; 
				br[j] = br[j + 1];
				br[j + 1] = tmp;
			}
		}
	}
}


int main() 
{
	int ar[] = {12,3221,43,5,72,67,9,62,41,432,-58,-52,-9};
	int n = sizeof(ar) / sizeof(ar[0]);
	int i = 0;
	BubberSort(ar, n);
	for (; i < n; ++i) {
		printf("%d ", ar[i]);
	}
	
	return 0;

}

//九九乘法表
//
//int main()
//{
//	for(int i = 1;i<10;i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %d  ", i, j, i * j);
//		}
//
//		printf("\n");
//	}
//   return 0;
//}


//1000以内完数
//
//int main() 
//{
//	const int n = 1000;
//	int ar[50];
//	for (int i = 2; i < n; i++)
//	{
//		int sum = 0;
//		int flag = 0;
//		for (int j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//				ar[flag++] = j;
//			}
//		}
//		if (i == sum) 
//		{
//			printf("%d的完数是：",i);
//			for (int j = 0; j < flag; j++) 
//			{
//				printf("%d  ",ar[j]);
//			}
//			printf("\n");
//		}
//
//	}
//
//
//}