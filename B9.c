#include <stdio.h>
#include <stdlib.h>

int main() {
    int input, result;
    scanf("%d", &input);
    for (int i = 0; i <= input; i++) {
        if (i % 3 == 0) {
            result += i;
        }
    }
    printf("%d", result);
    return 0;
}