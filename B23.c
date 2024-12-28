#include <stdio.h>
#include <stdlib.h>

int main() {
    int money, a1, a2, a3, total, m50, m5, m1, left;

    scanf("%d,%d,%d,%d", &money, &a1, &a2, &a3);
    total = 15 * a1 + 20 * a2 + 30 * a3;
    if (money < total) {
        printf("0\n");
    } else {
        left = money - total;
        m50 = left / 50;
        left = left % 50;
        m5 = left / 5;
        m1 = left % 5;
        printf("%d,%d,%d\n", m1, m5, m50);
    }

    return 0;
}
