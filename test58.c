#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include<math.h>

int main() {
    int n;
    float b, h, t, H, c;

    while (scanf("%d", &n) != EOF) {
        if (1 <= n && n <= 3) {
            h = (n - 1) * 5;
            H = h + 1.75;
            b = (2 * H);
            c = b / 9.8;
            t = sqrt(c);
            printf("%.3f\n", t);
        }

        else if (4 <= n && n <= 17) {
            h = 10 + (n - 3) * 3;
            H = h + 1.75;
            b = (2 * H);
            c = b / 9.8;
            t = sqrt(c);
            printf("%.3f\n", t);
        }
    }
    return 0;
}
