#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t, x;
    cin >> s >> t;

    if (strstr(s.c_str(), t.c_str())) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}