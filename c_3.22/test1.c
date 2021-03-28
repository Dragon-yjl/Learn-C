#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>

//int Factor(int n) {
//	int result = 1;
//	for (int i = 1; i <= n; i += 1) {
//		result *= i;
//	}
//	return  result;
//}

int main() {
	char str1[] = "Welcome to bit!";
	char str2[] = "###############";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <=right) {
		str2[left] = str1[left];
		str2[right] = str1[right];
		left += 1;
		right -= 1;
		system("cls");//cls clear screen cmd 
		printf("%s\n", str2);
		Sleep(200);
	}
	return  0;
}