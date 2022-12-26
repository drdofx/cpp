#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int total=0;
    int pointer = (int) 'a';

    for (int i=0; i<s.size(); i++) {
        total += min({abs((int)s[i]-pointer), 26 - (abs((int)s[i]-pointer))});
        pointer = (int) s[i];
    }

    cout << total << '\n';

    return 0;
}
