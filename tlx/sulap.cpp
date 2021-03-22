#include <bits/stdc++.h>

using namespace std;

const int ROW = 2;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int N, T;
    int p, q, x, y;
    char P, Q;
    cin >> N;
    int a[2][1001];

    for (int i=0; i<ROW; i++) {
        for (int j=0; j<N; j++) {
            cin >> a[i][j];
        }
    }

    cin >> T;
    for (int i=0; i<T; i++) {
        cin >> P >> x >> Q >> y;
        p = P - 'A';
        q = Q - 'A';
        x--, y--;
        swap(a[p][x], a[q][y]);
    }

    for (int i=0; i<ROW; i++) {
        for (int j=0; j<N; j++) {
            cout << a[i][j];
            if (j+1 < N) cout << " ";
        }
        cout << endl;
    }

    return 0;
}