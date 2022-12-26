#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum =0;
    for (int i=0; i<n; i++) {
        sum+=n;
    }

    sum = sum % 998244353;

    cout << sum << '\n';
    return 0;
}