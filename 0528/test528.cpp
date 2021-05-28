#include<stdio.h>
#include<stdlib.h>
#include <cassert>
#define ARSIZE 100
//
//int FindValue(int* br, int n, int val)
//{
//	assert(br != nullptr);
//	int pos = -1;
//	int i = 0;
//	//while(br[i] != val && i<n)//不好，数组越界还要比较一次
//	while(i<n && br[i] != val)//先判断数组是否越界
//	{
//		++i;
//	}
//	if (i < n) {//是因为&&后面的语句为假退出来了
//
//		pos = i;
//	}

//	//******************
	//while (i<n)
	//{
	//	if (br[i] == val) {
	//		pos = i;
	//		break;
	//	}
	//	i++;

	//}
//	return pos;
//
//}
//或

//int FindValue(int ar[],int n,int val) {
//	assert(ar != nullptr);//判断指针是否为空
//  
//	for (int i = 0; i < n ; ++i)
//	{
//		if (val == ar[i])
//		{
//			return i;
//
//		}
//
//	}
//	return -1;
//
//}
//
//
//
//int FindValue(int* br,int n,int val) 
//{
//	assert(br != nullptr);
//	int pos = -1;
//	while (pos >= 0 && br[pos] != val)
//	{
//		pos--;
//
//	}
//	return pos;
//}

//void Init_Ar(int ar[], int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		ar[i] = rand() % 100 + 1;//1-99伪随机赋值
//	}
//
//}

//随机给数组赋值1-100，且不重复
//void Init_Ar(int ar[], int n, int val)
//{
//	assert(ar != nullptr);
//	int i = 0;
//	while (i<n)
//	{
//		int temp = ar[i] = rand() % 100 + 1;
//		if (FindValue(ar, i, val) == -1) {//FindValue(ar, n, val)如果是n，每次查询了100次，所以用i降低时间复杂度
//			ar[i] = temp;
//			++i;
//		}
//	
//	}
//	
//}


//查表法，随机赋值且不重复
//void Init_Ar(int* br)
//{
//	assert(br != nullptr);
//	int table[ARSIZE + 1] = {};
//	int n = 0;
//	int i = 0;
//	while (i<n) 
//	{
//		int temp = rand() % 100 + 1;
//		if (table[temp] == 0) 
//		{
//			br[i] = temp;
//			++i;
//			table[temp] = 1;
//		}
//	}
//}
//
//void Print(int* br)
//{
//
//	printf("%5d",br[ARSIZE]);
//	if(())
//}
//
//int main() 
//{
//	int ar  [ARSIZE] = {};
//	Init_Ar(ar, ARSIZE);
//	Print(ar, ARSIZE);
//	return 0;
//}

//int main() 
//{
//	int ar[] = {12,23,34,45,56,67,78,89,90,100};
//	int n = sizeof(ar) / sizeof(ar[0]);
//	int val = 0;
//	scanf_s("%d",&val);
//	int pos = FindValue(ar, n, val);
//
//	printf("%d \n",pos);
//}

//int main() 
//{
//
//}

int FindValue(int* br,int n,int val) 
{
	assert(br != nullptr);
	int left = 0;
	int right = n - 1;
	int pos = -1;
	while (left <= right)//不能是left<right,因为当left=right的时候说明数组里面只有一个元素，也要查询，算法分析与设计里面的
		//分支策略，只有当它俩交叉的时候数组就是空的
	{
		int mid = left + (right - left) / 2;
		 if (val < br[mid])
		{
			right = mid - 1;
		}
		else if(val>br[mid])
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
	int ar[] = {12,23,34,45,56,67,78,89,90,100};
	int n = sizeof(ar) / sizeof(ar[0]);
	int val = 0;
	scanf_s("%d",&val);
	int pos = FindValue(ar, n, val);
	printf("%d\n",pos);
}