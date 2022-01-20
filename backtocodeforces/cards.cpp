#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, el;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i=0; i<n; i++) {
        cin >> el;
        v.push_back(make_pair(el, i+1));
    }

    sort(v.begin(), v.end());

    for (int i=0; i<n/2; i++) {
        cout << v[i].second << " " << v[n-i-1].second << '\n';
    }
 
    return 0;
}