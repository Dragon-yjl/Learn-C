#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void	showWindowStyle() {
	system("mode con cols=15 lines=1");
	system("color f0");
	system("title 表白小程序");
	printf("做我老婆？");
}

char userInputData[4][100] = { "做我老婆？","你养我","保大", "我妈会游泳"};
int main() {
	int i = 0;
	showWindowStyle();
	while (1) {
		FILE* pFile = fopen("voice.vbs", "w");
		fprintf(pFile, "msgbox(\"%s\")", userInputData[i++]);
		fclose(pFile);
		system("voice.vbs");
		system("del voice.vbs");
		if (i == 4)
			i = 0;

	}
	return 0;
}