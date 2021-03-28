#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

void Func(int* x) {
	*x+=1;
}

void PrintNum(unsigned int num) {
	if (num > 9) {
		PrintNum(num / 10);
	}
	printf("%d\t",num%10);
}
int main() {
	/*int num=0;
	Func(&num);
	printf("%d\n",num);*/
	PrintNum(1234);
	return 0;
}