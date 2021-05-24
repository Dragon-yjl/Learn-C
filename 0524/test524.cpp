#include<stdio.h>

#include<string.h>

#include<stdlib.h>
//int removeElement(int* nums, int numsize, int val)
//{
//	int src = 0;
//	int dest = 0;
//		{
//		while (src < numsize)
//	{
//		if (nums[src] != val)
//		nums[dest] = nums[src];
//			dest++;
//			src++;
//			
//		}
//		else {
//			++src;
//		}
//	}
//	return dest;
//}

//int main() {
//	int nums[] = { 1,2,4,5,3,3,5,3 };
//	
//	printf("新数组长度为：%d\n", removeElement(nums, 8, 5));
//
//}

//int main() {
//	int nums[] = {1,5,15,5,45,78};
//	int val = 5;
//	int n = sizeof(nums) / sizeof(int);
//	int m = n;
//	for (int i = 0; i < n; i++) 
//	{
//		if (nums[i] == val) 
//		{
//			m--;
//		}
//		
//	}
//	printf("%d\n", m);
//	return 0;
//
//}


#include <stdio.h>
#include <string.h> 
int main()
{
	int s[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int p[10];
	//下标从0开始
	memcpy(p, s, sizeof(s));
	for (int i = 0; i < 10; i++)
		printf("%d ", p[i]);
	return 0;
}
