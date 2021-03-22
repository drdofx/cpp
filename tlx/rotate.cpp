#include <bits/stdc++.h>

using namespace std;

int main() {
    int row, column;
    cin >> row >> column;
    int a[100][100];

    for (int i=0; i < row; i++) {
      for (int j=0; j < column; j++) {
        cin >> a[i][j];
      }
    }

    for (int j=0; j < column; j++) {
      for (int i=row-1; i >= 0; i--) {
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
    return 0;
}