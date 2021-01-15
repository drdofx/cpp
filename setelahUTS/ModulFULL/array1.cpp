#include <bits/stdc++.h>

using namespace std;

int main() {
    int a=3, b1=3, b2=5;
    int matriks_a[a][a], matriks_b[b1][b2], matriks_c[a][b2];

    for (int i=0; i<a; i++) {
        cout << "Matriks A baris ke- " << i+1 << endl;
        for (int j=0; j<a; j++) {
            cout << "masukan nilai a baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> matriks_a[i][j];
        }
        cout << endl;
    }

    cout << endl;

    for (int i=0; i<b1; i++) {
        cout << "Matriks B baris ke-" << i+1 << endl;
        for (int j=0; j<b2; j++) {
            cout << "masukan nilai b baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> matriks_b[i][j];
        }
        cout << endl;
    }

    int tmp;
    for (int i=0; i<a; i++) {
        for (int j=0; j<b2; j++) {
            matriks_c[i][j]=0;
            for (int k=0; k<a; k++) {
                matriks_c[i][j] += matriks_a[i][k] * matriks_b[k][j];
            }
        }
    }

    cout << "\nMATRIKS C\n";
    cout << "----------------\n";

    for (int i=0; i<a; i++) {
        for (int j=0; j<b2; j++) {
            if (j==0) cout << '|'<< matriks_c[i][j] << ' ';
            else if (j==4) cout << matriks_c[i][j] << '|';
            else cout << matriks_c[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}