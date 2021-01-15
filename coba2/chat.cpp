#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, s2="hello";
    cin >> s;
    int s2count=0, count=0;
    for (int i=0; i < s.size(); i++) {
        if (s[i] == s2[s2count]) {
            count+=1;
            s2count+=1;
        }
    }

    if (count == 5) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}