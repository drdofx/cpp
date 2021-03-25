#include <bits/stdc++.h> 

using namespace std; 

bool cek(string s) {
    int length = s.length();
    if (length == 1 || length == 2) {
        if (s[0] == s[length-1]) return true;
    }
    else if (s[0] == s[length-1]) return cek(s.substr(1, length-2));
    else return false;
}

int main() {
    string s; cin >> s;
    int last = s.length()-1;
    int hasil = cek(s);
    if (hasil) cout << "YA" << endl;
    else cout << "BUKAN" << endl;
    
    return 0;  
}  