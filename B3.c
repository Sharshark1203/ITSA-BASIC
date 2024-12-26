#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, Y;
    const int radiusSquared = 10000;  // 圓半徑平方

    scanf("%d %d", &X, &Y);

    int distanceSquared = X * X + Y * Y;

    if (distanceSquared <= radiusSquared) {
        printf("inside\n");
    } else {
        printf("outside\n");
    }

    return 0;
}