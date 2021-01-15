#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    char a[r][c];
    for (int i=0; i<r; i++) { 
        for (int j=0; j<c; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'C' || a[i][j] == 'Y' || a[i][j] == 'M') {
                cout << "#Color" << endl;
                return 0;
            } 
        }
    }
    cout << "#Black&White" << endl;
    return 0;
}
