#include <bits/stdc++.h>

using namespace std;

bool checkMultiple(int n) {
    while (n > 0) {
        n -= 100;
    }

    if (n == 0) return true;

    return false;
}

int main() {
    int X;
    cin >> X;
    if (X <= 0) {
        cout << "No\n";
    } else if (checkMultiple(X)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}