#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch, ID[10];
    int X1, X2, P;
    for (int i = 0; i < 10; i++) {
        ch = getchar();
        ID[i] = ch;
    }

    if (ID[0] < 'I') {
        X1 = (ID[0] - 'A' + 10) / 10;
        X2 = (ID[0] - 'A' + 10) % 10;
    } else if (ID[0] == 'I') {
        X1 = 3;
        X2 = 4;
    } else if (ID[0] < 'O') {
        X1 = (ID[0] - 'J' + 18) / 10;
        X2 = (ID[0] - 'J' + 18) % 10;
    } else if (ID[0] == 'O') {
        X1 = 3;
        X2 = 5;
    } else if (ID[0] < 'W') {
        X1 = (ID[0] - 'P' + 18) / 10;
        X2 = (ID[0] - 'P' + 18) % 10;
    } else if (ID[0] == 'W') {
        X1 = 3;
        X2 = 2;
    } else if (ID[0] == 'X') {
        X1 = 3;
        X2 = 0;
    } else if (ID[0] == 'Y') {
        X1 = 3;
        X2 = 1;
    } else if (ID[0] == 'Z') {
        X1 = 3;
        X2 = 3;
    }

    P = X1 + 9 * X2 + 8 * (ID[1] - '0') + 7 * (ID[2] - '0') + 6 * (ID[3] - '0') + 5 * (ID[4] - '0') + 4 * (ID[5] - '0') + 3 * (ID[6] - '0') + 2 * (ID[7] - '0') + (ID[8] - '0') + (ID[9] - '0');
    if (P % 10 == 0) {
        printf("CORRECT!!!\n");
    } else {
        printf("WRONG!!!\n");
    }
    return 0;
}