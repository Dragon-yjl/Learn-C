#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>

int main() {
	int t, character = 0, number = 0, others = 0, row = 0, i = 0;
	char c;
	scanf("%d", &t);
	getchar();
	for (i = 0; i < t; i++) {
		while ((c = getchar()) != EOF) {
			if (c == '\n') {
				printf("character:%d\n", character);
				printf("number:%d\n", number);
				printf("others:%d\n", others);
				character = number = others = 0;
				break;
			}
			if (c <= 'z' && c >= 'a')
				character++;
			else if (c <= 'Z' && c >= 'A')
				character++;
			else if (c <= '9' && c >= '0')
				number++;
			else
				others++;
		}
	}
	return 0;
}