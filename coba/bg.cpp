#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n=0;

    sort(s.begin(), s.end());

    for (int i=1; i<=s.size(); i++) {
        if (s[i-1] != s[i]) n+=1;
    }

    if (n%2 == 0) cout << "CHAT WITH HER!" << '\n';
    else cout << "IGNORE HIM!" << '\n';
    return 0;
}