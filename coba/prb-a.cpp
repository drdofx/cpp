#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, c0, c1, h, coins;

    cin >> t;
    for (int i=0; i < t; i++) {
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        for (int j=0; j < n; j++) {
            if (s[j] == s[0]) {
                // if (s[j] == "1") {
                //     coins += c1;
                // } else {
                //     coins += c0;
                // }
            }
        }

    }
    cout << coins << endl;

    

    return 0;
}