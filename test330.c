#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//
//int main() {
//	//未定义
//	/*char str[] = {'a','b','c'};
//	printf("%d\n",strlen(str));*/
//	//一维数组
//	//int arr[] = {4,2,2,3,3};
//	//for (int i = 0; i <= 4; i++) {
//	//	printf("%d\n",arr[i]);//打印指针变量
//	//	//打印地址用%p 十六进制
//    //}
//	//二维数组  三行四列
//	int arr[3][4] = {//无论是几维数组，只有第一个[]可以省略
//		{1, 2, 3, 4},//大括号可以不加
//		{5, 6, 7 ,8},//(1,2,3)逗号表达式的值为最后一个元素
//		{9, 10, 11, 12}//不写默认为0
//	};//长度为3的一维数组，每个元素长度为4
//	for (int i = 0; i < 3; i++) {
//	//arr[i]得到一个长度为4的数组
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", arr[i][j]);
//		}//用row col代替i j就可避免失误
//		printf("\n");
//	}
//	return 0;
//}
// 
//数组的排序
//冒泡排序

void BubbleSort(int arr[],int size) {
	//每次找最小
	//[0,bound）已排序区间
	//[bound,size]待排序区间
	//每次找最小值放前面，就是排序区间多一个元素
	//待排序区间少一个元素
	for (int bound = 0; bound < size;bound++) {
		//还需要一重循环，负责找到当前排序区间中的最小值
		//并放到bound位置上
		for (int cur = size - 1; cur > bound; cur--) {
			//比较相邻元素，不符合就交换
			if (arr[cur - 1] <  arr[cur]) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}
int  main() {
	int arr[6] = {2,5,3,4,9,7};
	BubbleSort(arr,6);
	for (int i = 0; i < 6; i++) {
		printf("%d\n",arr[i]);
	}
	printf("\n");
	return 0;

}