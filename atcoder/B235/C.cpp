#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, a, x, k;
    cin >> n >> q;

    map<int, vector<int>> mp;

    for (int i=0; i<n; i++) {
        cin >> a;
        mp[a].push_back(i+1);
    }

    for (int i=0; i<q; i++) {
        cin >> x >> k;
        if (k <= mp[x].size()) {
            cout << mp[x][k-1] << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}