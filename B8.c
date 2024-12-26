#include <math.h>
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("NO\n");
        return 0;
    }
    if (num == 2) {
        printf("YES\n");
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
