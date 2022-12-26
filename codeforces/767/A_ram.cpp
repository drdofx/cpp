#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    int n, k, el;

    while (t--) {
        cin >> n >> k;
        vector<pair<int, int>> vect;
        for (int i=0; i<n; i++) {
            cin >> el;
            vect.push_back(make_pair(el, i));
        }
        for (int i=0; i<n; i++) {
            cin >> el;
            vect[i].second = el;
        }

        sort(vect.begin(), vect.end());

        for (int i=0; i<n; i++) {
            if (vect[i].first <= k) {
                k += vect[i].second;
            }
        }

        cout << k << '\n';   
    }

    return 0;
}
