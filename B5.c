#include <stdio.h>
#include <stdlib.h>

int pow(int i, int j) {
    int result = 1;
    for (int k = 0; k < j; k++) {
        result *= i;
    }
    return result;
}

int main() {
    int input, output;
    scanf("%d", &input);

    // 處理負數，模擬 8 位有符號整數的補碼
    if (input < 0) {
        input = 256 + input;
    }

    // 利用位運算逐位輸出二進制
    for (int i = 7; i >= 0; --i) {
        output = input / (pow(2, i));
        input = input % (pow(2, i));
        printf("%d", output);
    }
    printf("\n");
    return 0;
}