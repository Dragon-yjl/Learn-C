#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//
// 
// 输入一串字符求里面各种字符个数
//void statistic(const char* str)
//{
//	assert(str != nullptr);
//	if (str == nullptr)
//		return;
//	int letter = 0;
//	int digit = 0;
//	int space = 0;
//	int other = 0;
//	while (*str !='\0')//需要解引用
//	{
//		if (isdigit(*str))
//		{
//			digit++;
//		}
//		else if (isalpha(*str))
//		{
//			letter++;
//		}
//		else if (isblank(*str)) {//或者isblank,或者*str== ' ';
//			space++;
//		}
//		else
//		{
//			other++;
//		}
//		str++;
//	}
//	printf("字母个数： %d\n数字个数： %d\n空格个数： %d\n其他个数： %d\n",letter,digit,space,other);
//}
//
//
//int main()
//{
//	const char *str = "13qjoirq245';;.  68";
//	statistic(str);
//	return 0;
//}
//
// 水仙花数
//bool Isflower(int n)
//{
//	assert(n <= 999 && n >= 100);
//	if (n > 999 || n < 100)
//		return false;
//
//	int a, b, c = 0;
//	bool flag = true;
//		a = n / 100;//分离百位数
//		b = (n % 100) / 10;//分离十位数
//		c = n % 10;//分离个位数
//		if (a * a * a + b * b * b + c * c * c == n)
//		{
//			return flag;
//		}
//		flag = false;
//		return flag;
//}
//
//int main() 
//{
//	int n = 153;
//	bool flag = Isflower(n);
//	printf("%d\n",flag);
//	return 0;
//}

//猴子吃桃
//int Peach()
//{
//	int sum = 1;
//	for (int i = 1; i < 10; ++i)
//	{
//		sum = (sum + 1) * 2;
//	}
//	return sum;
//}

//猴子吃桃递归
//int Peach(int i)
//{
//	if (i == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 2 * (Peach(i - 1) + 1);//返回后一天的+1在*2
//	}
//		
//
//}
//int main()
//{
//	int n = 10;
//	printf("%d\n", Peach(n));
//}


//ABC三人打乒乓球，求对手名单
//char -128 ---  +127
//void Match()
//{
//	char i, j, k;//i,j,k对应xyz三个队员
//	for (i = 'x'; i <= 'z'; i++)
//	{
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			if (i != j)
//			{
//				for (k = 'x'; k <= 'z'; k++) 
//				{
//					if (i != k && j != k)
//					{
//						if (i != 'x' && k != 'x' && k != 'z')
//							printf("比赛名单为：A---%c\tB---%c\tC---%c",i,j,k);
//					}
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	Match();
//	return 0;
//}

#define  ROW  10//#undef ROW 释放宏定义，避免重复
int main()
{
	int a[ROW][ROW] = { 0 };
	int i, j = 0;
	for (i = 0; i <ROW; i++)
	{
		a[i][0] = 1;//每一行第一个元素为1
		a[i][i] = 1;//每一行最后一个元素为1
	
	}
	for (i = 2; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			a[i][j] = a[(i-1+ROW)%ROW][(j-1+ROW)%ROW] + a[(i-1+ROW)%ROW][j];
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}