#include <bits/stdc++.h> 

using namespace std; 

int main() {
    string s;
    cin >> s;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '_') {
            s.erase(i, 1);
            s[i]-=32;
        } 
        else if (isupper(s[i])) {
            s[i]+=32;
            s.insert(i, "_");
        }
    }
    cout << s << endl;
    return 0;  
}  