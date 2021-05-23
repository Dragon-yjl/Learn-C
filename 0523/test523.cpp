#include<stdio.h>
#include<stdlib.h>
#include<String.h>
//*******传值******
//void  Swap(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//
//
//}
//
//int main() {
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	Swap(a, b);
//	printf("%d %d\n",a,b);
//
//}
//输入a,b的并没有交换

//******传址************
//void  Swap(int *x, int *y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//
//
//}
//
//int main() {
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d\n",a,b);
//
//}
//输入a ,b 的值发生了交换




//***********传引用*****************
//void  Swap(int &x, int &y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//
//
//}
//
//int main() {
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	Swap(a, b);
//	printf("%d %d\n", a, b);
//
//}
//输入a,b的值发生了交换


//int Max(int x, int y) 
//{
//	int max = x;
//	if (x < y) {
//		max = y;
//	}
//	return max;
//
//}
//
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d\n",Max(a, b));
//	return 0;
//}

//九九乘法表
//int main() {
//	for (int i = 1; i <=9; i++) {
//
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d\t", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}



//判断数组中最大的两个值

void PrintMax(int ar[],int n) {

	int max1 =0;
	int max2 = 0;
	
	for (int i = 1; i < 10; i++) {
		if (ar[i] > max1) {
			max2 = max1;
			max1 = ar[i];
		}
		else if (ar[i] > max2) {
			max2 = ar[i];
		}
	}
	printf("max1 = %d,max2 = %d", max1, max2);

}
int main() {
	const int n = 10;
	int ar[n] = { 12,23,34,45,56,67,78,89,190,100};
	PrintMax(ar,n);
	return 0;
}