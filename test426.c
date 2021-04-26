#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
int prime(int n);
int prime(int n)
{
	int i, flag = 1;
	for (i = 2; i <= n / 2; ++i)
		if (n % i == 0)
			flag = 0;
	return flag;
}
int main()
{
	int n, i, flag = 0;
	printf("请输入一个整数:");
	scanf("%d", &n);
	for (i = 2; i <= n / 2; ++i)
	{
		if (prime(i) != 0)
		{
			if (prime(n - i) != 0)
			{
				printf("%d = %d + %d\n", n, i, n - i);
				flag = 1;
			}
		}
		
	}
}