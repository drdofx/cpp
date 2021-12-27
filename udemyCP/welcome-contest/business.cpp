#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x;
    string s, last, remainder;
    cin >> t;
    while (t--) {
        cin >> s;
        last = s.back();
        s.pop_back();
        
        x = 1;
        for (int i=0; i<s.size(); i++) {
            x *= (s[i] - '0');
        }
        remainder = char ('A' + (x % 26));
        if (remainder == last) cout << "AUTHENTIC\n";
        else cout << "FAKE\n";
    }

    return 0;
}