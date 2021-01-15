#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, str2;
    cin >> str >> str2;
    reverse(str.begin(), str.end());
    if (str == str2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
