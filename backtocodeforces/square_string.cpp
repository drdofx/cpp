#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    cin >> t;

    while(t--) {
        cin >> s;
        bool status = true;
        if (s.size() % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }

        for (int i=0; i<s.size()/2; i++) {
            if (s[i] == s[s.size()/2 + i]) {
                continue;
            } else {
                status = false;
                break;
            }
        }

        cout << (status ? "YES" : "NO") << endl;
    }
 
    return 0;
}