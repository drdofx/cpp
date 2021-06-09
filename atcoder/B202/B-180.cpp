#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    reverse(s.begin(), s.end());
    for (char& c: s) {
        if (c=='6') c = '9';
        else if(c=='9') c = '6';
    }
    cout << s << endl;
    return 0;
}