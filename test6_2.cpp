#include<stdio.h.>
#include<stdlib.h>

#include<math.h>
#include<assert.h>


//输入一个大于0小于1000的整数，开平方根
int mysqrt(unsigned int val) 
{
	assert(val > 0 && val < 1000);//断言，程序员给自己看的

	if (val <= 0 && val > 1000)//给用户看的，缺一不可，顺序不可逆
		return -1;

	int tmp = 1;

	while (tmp*tmp <= val)
	{
		tmp++;
	}
	
	return --tmp;


}

//输入一个整数，求是几位数
int Get_figure(unsigned int val)
{
	int tmp = 0;

	while (val != 0)
	{
	
		val /= 10;
		tmp++;
	
	}
	return tmp;
}


//输入一个整数，把它正序输出

void Print_order(unsigned int val)
{
	int order = (int)pow(10.0, Get_figure(val) - 1);

	while (val!=0)//while(order !=0)
	{
		int tmp = val / order;

		printf("%d ",tmp);

		val = val % order;
		order = order / 10;

	}
	printf("\n");
}


//输入一个整数，逆序输出
void Print_Reverse(unsigned int val)

{
	while (val!=0)
	{
		printf("%d ", val % 10);

			val/= 10;
	}

	printf("\n");
}
int main() 
{
	int val = 0;
	scanf_s("%d", &val);
	
	//int tmp = mysqrt(val);
	//int tmp = Get_figure(val);
	Print_order(val);

	Print_Reverse(val);
	//printf("%d\n",tmp);
	return 0;
}