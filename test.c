//#define _CRT_SECURE_NO_DEPRECATE 1
//#include<stdio.h>
////
//////int Max(int x, int y) {
//////	if (x > y) {
//////		return x;
//////	}
//////	return y;
//////}
////////void Swap(int x, int y) {
////////	int tmp = x;
////////x = y;
////////	y = tmp;
////////}
//////void Swap(int* x, int* y) {
//////	int tmp = *x;
//////	*x = *y;//*x与a等价 意思是根据地址找到值
//////	*y = tmp;
//////}
//////int main(){
//////	int a = 100;
//////	int b = 20;
//////	Swap(&a, &b);
////////Swap(a,b);
//////	printf("a=%d,b=%d\n",a,b);
//////	return 0;
//////}
//////如果返回1就是素数，返回0就不是
////int IsPrime(int num) {
////	if (num == 0) {
////		return 0;
////	}
////	if (num == 1) {
////		return 0;
////	}
////	//找一下num能被那些数整除
////	//找反例，能被num整除就不是素数
////	for (int i = 2; i < num; i++) {
////		if (num % i == 0) {
////			return  0;
////		}
////	}
////	return  1;
////}
////int IsLeapYear(int year) {
////	//普通闰年  世纪闰年
////	if (year % 100 == 0) {//世纪闰年
////		if (year % 400 == 0) {
////			return 1;
////		}
////		return 0;
////	}
////	else {//普通闰年
////		if (year % 4 == 0) {
////			return 1;
////		}
////		return  0;
////	}
////}
////
////通过函数完成二分查找
////数组必须有序
////数组作为函数参数时，会隐式转变成指针
//int BinarySearch(int arr[], int size, int toFind) {
//	int left = 0;
//	int right = size- 1;//最后一个元素的下标
//	//【left，right】前闭后闭区间待查找区间
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < toFind) {
//		//左边找
//			left = mid + 1;
//		}
//		else if(arr[mid]> toFind) {
//		//右边找
//			right = mid - 1;
//		}else {
//		//找到了
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	/*printf("%d\n", IsPrime(115));判断素数
//	/*	unsigned int a = 10;
//		unsigned int b = 20;
//		printf("%u\n",a-b);*/
////	printf("%d\n", IsLeapYear(2224));判断闰年
//	int arr[] = { 1,2,3,4,5,6,7};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinarySearch( arr,size,6);
//	printf("ret=%d\n",ret);
//	return 0;
//}