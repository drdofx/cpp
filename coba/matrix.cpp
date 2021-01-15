#include <bits/stdc++.h>

using namespace std;

int main() {
    int n=5, moves=0;

    for (int i=1; i <= n; i++) {
        for (int j=1; j <= n; j++) {
            cin >> moves;
            if (moves == 1) {
                cout << abs(i - 3) + abs (j - 3) << '\n';
            }
        }
    }

    return 0;
}