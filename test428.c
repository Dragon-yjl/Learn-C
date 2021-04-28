#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int power(int n1, int n2);
int main()
{
	int base, powerRaised, result;
	printf("基数：");
	scanf_s("%d", &base);
	printf("指数：");
	scanf_s("%d", &powerRaised);
	result = power(base, powerRaised);
	printf("%d^%d= %d", base, powerRaised, result);
	return 0;
}
int power(int base, int powerRaised)
{
	if (powerRaised != 0)
		return (base * power(base, powerRaised - 1));
	else
		return 1;
}
