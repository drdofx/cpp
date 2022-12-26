#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n; cin >> n;
    if (n >= INT_MIN && n <= INT_MAX) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}