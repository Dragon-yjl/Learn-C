#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main() {
    int  a[4][4], b[4][4], i, j;       /*a存放原始数组数据，b存放旋转后数组数据*/
    printf("input 16 numbers: ");
    /*输入一组数据存放到数组a中，然后旋转存放到b数组中*/
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
            b[3 - j][i] = a[i][j];
        }
    printf("array b:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%6d", b[i][j]);
        printf("\n");
    }
}