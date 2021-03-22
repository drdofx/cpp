#include <bits/stdc++.h> 

using namespace std; 

int main() {
    string s;
    int n;
    cin >> s >> n;
    for (int i=0; i<s.length(); i++) {
        s[i] = (s[i] - 'a' + n) % 26 + 'a';
    }
    cout << s << endl;
    return 0;  
}  