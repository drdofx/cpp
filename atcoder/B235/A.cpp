#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s, s1, s2;
    char a, b, c;
    cin >> n;

    s =  to_string(n);
    a = s[0], b = s[1], c = s[2];
    (((s1 += b) += c) += a);
    (((s2 += c) += a) += b);

    cout << to_string(stoi(s) + stoi(s1) + stoi(s2)) << '\n';

    return 0;
}