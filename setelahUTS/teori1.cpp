#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10], n;
    cout << "Jumlah array: ";
    cin >> n;

    for (int i=0; i<n; i++) {
        cout << "Indeks ke-" << i << " : ";
        cin >> a[i];
    }

    int min=a[0], posisi=0;

    for (int i=1; i<n; i++) {
        if (a[i] < min) {
            min = a[i];
            posisi = i;
        } 
    }

    cout << "Nilai minimal adalah: " << min << endl;
    cout << "Posisi nilai minimal index ke-" << posisi << endl;

    int x; cout << "\nMasukkan nilai X: "; cin >> x;
    for (int i=0; i<n; i++) {
        if (a[i] == x) {
            cout << "Nilai " << x << " ada pada indeks ke " << i << endl;
            return 0;
        }
    }
     
    cout << "Tidak ditemukan!" << endl; 
    return 0;
}