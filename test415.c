#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	double numberfrist, numbersecond;
	char oper;
	printf("请输入您需要进行计算的两个数字：");
	scanf("%lf %c %lf", &numberfrist, &oper, &numbersecond);
	if (oper == '+') printf("%.2lf", numberfrist + numbersecond);
	else if (oper == '-') printf("%.2lf", numberfrist - numbersecond);
	else if (oper == '*') printf("%.2lf", numberfrist * numbersecond);
	else if (oper == '/') printf("%.2lf", numberfrist / numbersecond);
	printf("\n");
	main(); //循环回主函数
}
