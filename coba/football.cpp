#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n=1;

    for (int i=1; i<=s.size(); i++) {
        if (s[i-1] == s[i]) {
            n+=1;
            if (n==7) {
                cout << "YES" << '\n';
                return 0;
            }
        } else {
            n=1;
        }
    }

    cout << "NO" << '\n';
    
    return 0;
}