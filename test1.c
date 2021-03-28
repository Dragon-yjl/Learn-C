#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

//写一个函数,实现一个整形有序数组的二分查找
int BinarySearch(int* arr, int size, int tofind) {
	//[left, right] 待查找区间
	int left = 0;
	int right = size - 1;
	//若int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//输出right = 0, 数组会隐形转成一个指针.
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < tofind) {
			//要去右侧区间查找
			left = mid + 1;//mid这个位置已查找
		}
		else  if (arr[mid] > tofind) {
			//去左侧区间找
			right = mid - 1;
		}
		else {
			//找到了
			return mid;//返回位置的下标
		}
	}
	return -1;//-1表示没找到
}
int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = BinarySearch(arr, size, 4);//找2.
	printf("ret = %d\n", ret);

	return 0;

}