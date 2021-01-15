#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, s2;
    cin >> str;
    
    for (int i=0; i < str.size(); i++) {
        if (str[i] != '+') {
            s2.push_back(str[i]);
        } 
    } 
    
    if (s2.size() == 1) {
        cout << s2 << '\n';
        return 0;
    }

    sort(s2.begin(), s2.end());

    for (int i=0; i<s2.size(); i++) {
        if (i == 0) cout << s2[i];
        else cout << "+" << s2[i];
    }

    cout << '\n';
    return 0;
}