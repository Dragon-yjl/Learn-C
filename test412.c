#define _CRT_SECURE_NO_DEPRECATE 1
//代码雨
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
int main()
{
	srand((unsigned)time(NULL));
	system("color 02");
	while (1) {
		for (int k = 0; k <= 90; k++)
			if (rand() % 5 >= 3)
				printf("%-*d", rand() % 3 + 2, k % 2);
		printf("\n");
		Sleep(50);
	}
	return 0;
}
