#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>                                  //睡眠函数,加清屏函数
int i, j;
void showlove() {                                    //显示变动图形程序
	{
		for (i = 0; i < 7; i++)
			printf("* * * * * * * *\n");
		Sleep(1000);
		system("cls");
		{
			printf("  * * * * * *  \n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("  * * * * * *  \n");
			Sleep(1000);
			system("cls");
		}
		{
			printf("  * * * * * *  \n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("  * * * * * *  \n");
			printf("    * * * *    \n");
			Sleep(1000);
			system("cls");
		}i = 0;
		while (i++ < 5)
		{
			printf("  * *     * *  \n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf(" * * * * * * * \n");
			printf("   * * * * *   \n");
			printf("      * *      \n");
			printf("       *       \n");
			Sleep(1000);
			system("cls");
			Sleep(1000);
			system("cls");
		}
	}
}
int main() {
	while (1) {
		char orign1[] = "I LOVE YOU";                     //左边慢慢自加运算,右边慢慢自减法运算
		char orign2[] = "          ";
		int left = 0, right = strlen(orign2) - 1;          //左右下标赋值,注意右边求出字符串长度需要减一才能求出右边字符串下标
		while (left <= right) {                          //当左边大于右边的时候,跳出循环
			orign2[left] = orign1[left];                 //i love you 的字符串慢慢的代替 空格字符串
			orign2[right] = orign1[right];
			left++;                                    //自增自减完成字符串的 "移动"
			right--;
			printf("%s\n", orign2);
			Sleep(1000);                               //然后睡眠一秒
			system("cls");                             //语句是自顶向下计算的所以完成一条之后执行到这里完成清屏操作 	 
		}
		showlove();                                     //执行心形图形显示操作
	}
}