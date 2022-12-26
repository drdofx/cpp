#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int a, b;

    cin >> s;
    cin >> a >> b;

    swap(s[a - 1], s[b - 1]);

    cout << s << endl;

    return 0;
}