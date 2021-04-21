#include <stdio.h>
int main(void) {
    int c;
    printf("\tCharacter  Code\n");
    int i = 0;
    for (c = 33; c <= 126; c++)
    {
        if (i % 4 == 0)
            printf("\n");
        printf("\t%c\t%d", c, c);
        i++;
    }
}
