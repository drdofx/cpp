#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << "Yes" << endl;
        return 0;
    }

    string s_reversed = s;
    reverse(s_reversed.begin(), s_reversed.end());

    if (s == s_reversed || s[s.size()-1] == 'a') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}