#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
void triangle(int);
int main()
{
    int n, m;
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &n);
        triangle(n);

    }
}
void triangle(int n)
{
    int i, k;
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i < n - k; i++)
            printf(" ");
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        printf("\n");
    }

}