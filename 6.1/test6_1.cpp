#include<stdio.h>
#include <cassert>   //assert函数
#include<stdlib.h>   //rand函数

#define RANDSIZE 100   
#define ARSIZE 100

//int main()
//{
//    const int n = 10;
//    int array[n] = {12,23,34,45,56,67,78,89,90,100};
//    int* ptr = array;
//    
//    for (int i = 0; i < n; i++)
//    {
//        printf("0x%p => %d\n",ptr, *ptr);
//        //(*ptr)++;
//        ptr++;
//    }
//    printf("\n");
//    return 0;
//}

//int main()
//{
//	const int n = 5;
//	char ar[n] = { 'y','j','l','g','m' };
//	char* p =  ar;
//	for (int i = 0; i < n; i++)
//	{
//		printf("0x%p => %c\n",p,*p);
//		p = p + 1;
//
//	}
//	printf("\n");
//	return 0;
//
//
//}
//
//void Strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//	}
//	*dest = '\0';
//}
//
//int main()
//{
//	char stra[20] = { "gahoguaeiggteoa" };
//	char strb[20] = {};
//	Strcpy(strb, stra);
//	printf("%s\n",strb);
//	return 0;
//}


//void my_strcpy(char* dest, char* src)
//{
//
//	while (*src != '\0')
//	{
//		*dest = *src;//*dest++ = *src++;三句等于这一句
//		dest++;
//		++src;
//
//	}
//	*dest = '\0';
//
//}
//
//
//int main()
//{
//	char stra[20] = { "yhping" };
//	char strb[20] = {};
//	my_strcpy(strb, stra);
//	printf("%s\n", strb);
//	return 0;
//
//}

int FindValue(int* br, int n, int val);

void Print(int* br, int n)
{
	assert(br != nullptr);
	for (int i = 0; i < n; i++)
	{
		printf("%4d ",br[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}

}


//给数组随机赋值1-100
void Init_Ar1(int* br, int n)
{
	assert(br != nullptr);
	int i = 0;
	while(i<n)
	{
		//br[i] = rand() % RANDSIZE + 1;//这样赋值是维素鸡，br[i]里面会有相同的值

		int tmp = rand() % RANDSIZE + 1;
		if (FindValue(br, n, tmp) == -1)
		{
			br[i] = tmp;
			++i;

		}
	}
}



//查表法随机不重复赋值
void Init_Ar2(int* br, int n)
{
	assert(br != nullptr);
	int i = 1;
	int table[ARSIZE + 1] = {};
	while (i < n)
	{
		int tmp = rand() % RANDSIZE + 1;
		if (br[tmp] == 0)
		{
			br[i] = tmp;
			++i;
			table[tmp] = 1;
		}
	}


}

//输入一个值，在数组中查找这个值，找到返回下标，找不到返回-1
int FindValue(int* br, int n, int val)
{
	assert(br != nullptr);
	int pos = -1;
	for (int i = 0; i < n; ++i)
	{
		if (val == br[i])
		{
			pos = i;
			break;
		}
	}

	return pos;
}


//交换函数
void Swap(int* ap, int* bp)
{
	int tmp = *ap;
	*ap = *bp;
	*bp = tmp;

}


//冒跑排序
void BubberSort(int* br, int n)
{
	assert(br != nullptr);
	bool tag = true;//定义一个标记，如果本来就有序的话就不用交换了
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (br[j] > br[j+1])
			{
				Swap(&br[j], &br[j + 1]);
				tag = false;
			}
		}
		if (tag) break;
	}


}

int main()
{
	const int n = 100;
	int ar[n] = {};
	int val = 0;
	Init_Ar1(ar, n);
	BubberSort(ar, n);
	Print(ar, n);
	return 0;

}

//int main()
//{
//	const int n = 10;
//	int ar[10] = { 12,23,34,45,56,67,78,89,90,100 };
//	BubberSort(ar, n);
//	Print(ar, n);
//	return 0;
//}