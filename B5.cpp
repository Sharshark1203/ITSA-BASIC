#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    cin >> input;

    // 處理負數，模擬 8 位有符號整數的補碼
    if (input < 0) {
        input = 256 + input;
    }

    // 利用位運算逐位輸出二進制
    for (int i = 7; i >= 0; --i) {
        cout << ((input >> i) & 1);
    }

    cout << endl;
    return 0;
}
