#include<stdio.h>
#include<string.h>
//int Max(int a, int b)
//{
//	return a > b ?  a : b;
//
//}
//
//int main()
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	int max = Max(a, Max(b, c));
//	printf("%d\n",max);
//	return 0;
//}



int main()
{
	char arr1[3] = { 'a', 'b', 'c' };
	char arr2[4] = "abc";
	const char* p = "abc";//这里只是把a的地址放进了p里边
	int i = 0;
	for (; i < 3;i++)
	{
		printf("%c",arr1[i]);//abc
	}
	printf("\n");
	printf("%s\n", arr2);//abc
	printf("%s\n", p);//abc
	printf("%p\n", p );//地址
	return 0;
}