#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x;
    cin >> t;

    while (t--) {
        cin >> x;
        if (x % 8 == 0) cout << "0\n";
        else if (x % 4 == 0) cout << "1\n";
        else if (x % 2 == 0) cout << "2\n";
        else cout << "3\n";
    }

    return 0;
}