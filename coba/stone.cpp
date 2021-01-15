#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, stones=0;
    cin>>n;
    string s;
    cin>>s;

    for (int i=1; i<=n; i++) {
        if (s[i] == s[i-1]) {
            stones+=1;
        }
    }
    cout << stones << '\n';
    return 0;
}