#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << (pow(2, n) > pow(n, 2) ? "Yes" : "No") << endl;
    return 0;
}