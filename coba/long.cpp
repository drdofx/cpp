#include <bits/stdc++.h>

using namespace std;

int main() {
    string * n;
    int m;

    cin >> m;
    n = new string[m];

    for (int i=0; i < m; i++) {
        cin >> n[i];
    }
    
    for (int i=0; i < m; i++) {
        if (n[i].size() <= 10) {
            cout << n[i] << endl;
        } else {
            cout << n[i][0] << n[i].size() - 2 << n[i][n[i].size()-1] << endl;
        }
    }
    return 0;
}