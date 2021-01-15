#include <bits/stdc++.h>

using namespace std;

int main() {
    int row, column;
    cin >> row >> column;
    int a[100][100], b[100][100];

    for (int i=0; i < row; i++) {
        for (int j=0; j < column; j++) {
            cin >> a[i][j];
        }
    }

    // for (int i = 0; i < column; ++i) {
    //     for (int j = 0; j < row; ++j) {
    //         a[j][i] = a[i][j];
    //     }
    // }

    for (int i = 0; i < column; ++i) {
      for (int j = 0; j < row; ++j) {
        cout << a[j][i] << ' ';
        if (j == row - 1) cout << endl;
      }
   }

    return 0;
}