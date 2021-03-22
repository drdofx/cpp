#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;
    int a[N][M], b[M][P], c[N][P];
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<M; i++) {
        for (int j=0; j<P; j++) {
            cin >> b[i][j];
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<P; j++) {
            c[i][j] = 0;
            for (int k=0; k<M; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    // for (int i=0; i<N; i++) {}
    return 0;
}