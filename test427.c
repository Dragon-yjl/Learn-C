#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, d;
    printf("输入方程的三个系数:");
    scanf_s("%f %f %f", &a, &b, &c);
    if (a != 0)
    {
        d = sqrt(b * b - 4 * a * c);
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        if (x1 < x2)
            printf("%0.2f %0.2f\n", x2, x1);
        else
            printf("%0.2f %0.2f\n", x1, x2);
    }
    return 0;
}