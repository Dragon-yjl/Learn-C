#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

void PrintNum(int num) {
 	if (num > 9) {
		PrintNum(num / 10);
	}
	printf("%d ", num % 10);
}

//int Strlen(char str[]) {
//	int i = 0;
//	//while (str[i] != '\0') {}
//	for (; str[i] != '\0'; i++) {
//	}
//	return i;
//}
//递归的含义相当于对问题进行拆分
//“abcd”==“a”+“bcd”
int Strlen(char str[]) {
	if (str[0] == '\0') {
		return 0;
	}
	return 1 + Strlen(str + 1);//指针+1跳过一个元素
	//strlen前面的1相当于a长度
}//递归了5次
//普通解法
//int Factor(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i++) {
//		result *= 1;
//	}
//	return result;
//}
//n阶乘递归解法
//把问题拆分 n！=n*n-1！
//递归了4次
int Factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n * Factor(n - 1);
}
//递归计算斐波那契
//int Fib(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	if (n == 2) {
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}

//使用非递归，通过一些变量保存中间结果
//避免重复运算
int Fib(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	//当前项的第一项
	int last1 = 1;
	int last2 = 1;
	int cur = 0;
	for (int i = 3; i <= n; i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main() {
	/*char str[] = "hahaha";
	int len = Strlen(str);
	printf("%d\n", len);*/
	//printf("%d\n",Factor(5));
	printf("%d\n",Fib(100));
	return 0;
}
 