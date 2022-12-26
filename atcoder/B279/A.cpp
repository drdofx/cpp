#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int bottoms=0;
    cin >> s;

    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'v') bottoms++;
        else if (s[i] == 'w') bottoms += 2; 
    }

    cout << bottoms << endl;
    return 0;
}