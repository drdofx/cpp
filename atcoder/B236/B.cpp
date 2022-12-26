#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a;
    map<int, int> mp;
    cin >> n;
    
    for (int i=0; i<(4*n-1); i++) {
        cin >> a;
        mp[a]++;
    } 

    for (auto x: mp) {
        if (x.second != 4) {
            cout << x.first << endl;
        }
    }

    return 0;
}