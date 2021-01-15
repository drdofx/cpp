#include <bits/stdc++.h>

using namespace std;

void isiArraydanSort(int a[], int n) {
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);
    cout << "Setelah SORT: \n";
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    
    cout << '\n';
}

int main() {
    int n; cout << "Masukkan N: "; cin >> n;
    int a[n];

    isiArraydanSort(a, n);
    int cari; cout << "Masukkan nilai X: "; cin >> cari;
    int bawah=0, tengah, atas=n-1;
    bool found=false;

    while (found != true) {
        if (atas < bawah) {
            break;
        }
        tengah=bawah + (atas-bawah) /2;
        if (a[tengah] < cari) {
            bawah=tengah+1;
        } else if (a[tengah] > cari) {
            atas=tengah-1;
        } else if (a[tengah] == cari) {
            found=true;
        }
    }

    if (found) cout << "Ketemu, di posisi ke-" << tengah+1 << endl;
    else cout << "Tidak ketemu (0)" << endl;
    return 0;
}