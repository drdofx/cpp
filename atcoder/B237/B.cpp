#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w;
    cin >> h >> w;
    int a[h][w];

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=0; i<w; i++) {
        for (int j=0; j<h; j++) {
            cout << a[j][i] << " ";
        }
        cout << '\n';
    }

    return 0;
}