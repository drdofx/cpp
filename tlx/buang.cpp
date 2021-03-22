#include <bits/stdc++.h> 

using namespace std; 

int main() {
    string s, t;
    cin >> s >> t;
    while (s.find(t) != -1) {
        s.replace(s.find(t), t.length(), "");
    }
    cout << s << endl;
    return 0;  
}  