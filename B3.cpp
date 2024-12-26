#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    const int radiusSquared = 10000;  // 圓半徑平方

    cin >> X >> Y;

    int distanceSquared = X * X + Y * Y;

    if (distanceSquared <= radiusSquared) {
        cout << "inside\n";
    } else {
        cout << "outside\n";
    }

    return 0;
}
