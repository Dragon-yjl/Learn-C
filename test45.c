#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//斐波那契数列
int main() {
	int a, b;
	long long int n, i = 1, j = 1;
	printf("请输入数列长度\n");
	scanf("%d", &a);
	for (b = 1; b<= a;b++) {
		if (b - 3 < 0) {
			n = 1;
			printf("%lld\n",n);
		}
		if (b - 3 >= 0) {
			n = i + j;
			i = j;
			j = n;
			printf("%lld\n",n);
		
		}
	}
	return 0;

}