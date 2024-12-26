#include <bits/stdc++.h>
using namespace std;

int main() {
    int input, result;
    cin >> input;
    for (int i = 0; i <= input; i++) {
        if (i % 3 == 0) {
            result += i;
        }
    }
    cout << result << "\n";
    return 0;
}