#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    int a, b, c, d;

    while(t--) {
        cin >> a >> b >> c >> d;

        if (max(a, b) > min(c,d) && min(a, b) < max(c,d)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
