#include <stdio.h>
#include <stdlib.h>

int main() {
    int times, num1, num2, num3, num4;
    char simble;

    scanf("%d", &times);
    getchar();

    for (int i = 0; i < times; i++) {
        scanf("%c", &simble);
        getchar();

        scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
        getchar();

        if (simble == '+') {
            printf("%d %d", num1 + num3, num2 + num4);
        } else if (simble == '-') {
            printf("%d %d", num1 - num3, num2 - num4);
        } else if (simble == '*') {
            printf("%d %d", num1 * num3 - num2 * num4, num2 * num3 + num1 * num4);
        }
    }

    return 0;
}
