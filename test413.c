#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 340
#include <string.h>
int main()
{
    char answer[4];
    printf("浮世有三\n吾爱有三\n日月卿\n日为朝，月为暮，卿为朝朝暮暮\n");
    printf("林深时见鹿\n海蓝时见鲸\n梦醒时见你\n");
    printf("螃蟹在剥我的壳\n笔记本在写我\n漫天的我落在枫叶上雪花上\n而你在想我\n");
    printf("自从喜欢你\n我的pH\n总是小于7\n");
    printf("你喜欢我吗？\n输入yes,你可以看到我的真心\n");
    scanf("%s", &answer);
    float y, x, z, f;
    for (y = 1.5f; y > -1.5f; y -= 0.1f)
    {
        for (x = -1.5f; x < 1.5f; x += 0.05f)
        {
            z = x * x + y * y - 1;
            f = z * z * z - x * x * y * y * y;
            putchar(f <= 0.0f ? "*********"[(int)(f * -8.0f)] : ' ');
        }
        putchar('\n');
    }
    long time;
    for (; ;)
    {
        system("color a");
        for (time = 0; time < 99999999; time++);
        system("color b");
        for (time = 0; time < 99999999; time++);
        system("color c");
        for (time = 0; time < 99999999; time++);
        system("color d");
        for (time = 0; time < 99999999; time++);
        system("color e");
        for (time = 0; time < 99999999; time++);
        system("color f");
        for (time = 0; time < 99999999; time++);
        system("color 0");
        for (time = 0; time < 99999999; time++);
        system("color 1");
        for (time = 0; time < 99999999; time++);
        system("color 2");
        for (time = 0; time < 99999999; time++);
        system("color 3");
        for (time = 0; time < 99999999; time++);
        system("color 4");
        for (time = 0; time < 99999999; time++);
        system("color 5");
        for (time = 0; time < 99999999; time++);
        system("color 6");
        for (time = 0; time < 99999999; time++);
        system("color 7");
        for (time = 0; time < 99999999; time++);
        system("color 8");
        for (time = 0; time < 99999999; time++);
        system("color 9");
    }

    getchar();
    return 0;
}
