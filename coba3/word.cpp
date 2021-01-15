#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int lower=0, upper=0; 
    for (int i=0; i<s.size(); i++) {
        if (isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }
    }
    if (upper == 0 || lower == 0) {
        cout << s << endl;
        return 0;
    } 
    
    if (lower >= upper) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    return 0;
}
