#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, x, el;
    cin >> t;

    while (t--) {
        cin >> n >> x;

        if (n == 1) {
            int el2;
            cin >> el;
            cin >> el2;
            if (el + el2 <= x) cout << "Yes\n";
            else cout << "No\n";

            continue;
        }

        vector<int> a, b;

        for (int i=0; i<n; i++) {
            cin >> el;
            a.push_back(el);
        }

        for (int i=0; i<n; i++) {
            cin >> el;
            b.push_back(el);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int i=0;
        while (n) {
            if (a[i] + b[i] > x) break;
            i++, n--;
        }
        n == 0 ? cout << "Yes\n" : cout << "No\n";
    }
 
    return 0;
}