#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//判断素数
// 
// //方法1
//int main()
//{
//	int m=1, n=0, i = 0;
//	while (m--)
//	{
//		scanf_s("%d", &n);
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//				break;
//		}
//		if (i == n)
//		{
//			printf("%d是素数\n", n);
//		}
//		else
//		{
//			printf("%d不是素数\n", n);
//		}
//		
//
//	}
//	return 0;
//}


//方法2
//int main()
//{
//	int m=0, flag, i;
//	scanf_s("%d", &m);
//	flag = 1;
//	for (i = 2; i <= sqrt(m); i++)
//	{
//
//		if (m % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//	{
//		printf("%d是素数\n", m);
//
//	}
//	else
//	{
//		printf("%d不是素数\n",m);
//	}
//	return 0;
//
//}


//2--100素数

int  isPrime(int n)
{
	int i = 0;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;

}

//int main()
//{
//	int i , c = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		if (isPrime(i))
//		{
//			printf("%4d", i);
//			c++;
//			if (c % 5 == 0)
//				printf("\n");
//		}
//	}
//	printf("\n");
//	return 0;
//}


//最大公约数，最小公倍数

int main()
{
	int m, n, r, mo, no;
	scanf_s("%d %d",&m,&n);
	mo = m;
	no = n;
	while (m%n>0)
	{
		r = m % n;
		m = n;
		n = r;

	}
	printf("最大公约数为%d",n);
	printf("最小公倍数为%d",mo*no/n);

	return 0;
}