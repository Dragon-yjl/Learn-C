#include<stdio.h>

#include<String.h>
//***************************
 //两个数交换
//void  Swap(int a, int b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	
//	//a和b的改变不影响主函数中x,y的值
//}
//int main() {
//	int x, y;
//	scanf_s("%d %d", &x, &y);
//	Swap(x, y);
//	printf("%d  %d\n", x, y);
//	
//	return 0;
//}
//****************************

//三个数取最大值
int Max_Int(int a, int b)
{
	int c = a > b ? a : b;
	return c;

}

int main() 
{

	int a, b, c;
	
	int max;
	scanf_s("%d %d %d",&a, &b, &c);
	max = Max_Int(a, Max_Int(b, c));
	printf("%d\n", max);
	return 0;

}

//
//int Mid_Int(int a, int b, int c)
//{
//	if (a > b) 
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(b> c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	return b;
//}
//
//int main() 
//{
//	int a, b, c;
//	int mid = 0;
//	scanf_s("%d %d %d", &a,&b,&c);
//	mid = Mid_Int(a, b, c);
//	printf("%d \n", mid);
//	return 0;
//}