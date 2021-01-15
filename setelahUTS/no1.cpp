#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[20], n, x;

    input:
        cout << "input jumlah array = ";
        cin >> n;
        if (n > 20) goto input;

    for (int i=0; i < n; i++) {
        cout << "Isi arrray ke-" << i+1 << " = ";
        cin >> a[i];
    }

    cout << "Nilai x yang dicari = ";
    cin >> x;

    for (int i=0; i < n; i++) {
        if (a[i] == x) {
            cout << "nilai " << x << " ditemukan pada isi array ke-"
            << i+1 << "\n";
            return 0;
        } 
    }

    cout << "nilai " << x << " tidak ditemukan pada array!\n";
    return 0;
}