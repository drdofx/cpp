#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int total = 0, solve = 0;
    for (int i=1; i<=n; i++) {
        total += 5*i;
        if (total + k <= 240) solve += 1;
    }

    cout << solve << endl;

    return 0;
}