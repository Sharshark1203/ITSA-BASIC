#include <stdio.h>
#include <stdlib.h>

int main() {
    double interest_rate, total = 0, initial;
    int month;

    scanf("%lf", &interest_rate);
    scanf("%d", &month);
    scanf("%lf", &initial);

    if (month == 0) {
        printf("%lld", (long long)initial);
        return 0;
    }

    for (int i = 0; i < month; i++) {
        total += initial;
        total *= (1 + interest_rate);
    }

    printf("%lld\n", (long long)total);

    return 0;
}
