#include <bits/stdc++.h>

using namespace std;

int main() {
    char a[15] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                'K', 'L', 'M', 'N', 'O'};

    cout << "\nISI ARRAY ADALAH : ";
    for (int i=0; i<15; i++) {
        cout << a[i] << ' ';
    }

    cout << "\n\nTAMPILAN ARRAY PERTAMA : \n";

    for (int i=0; i < 15; i+=5) {
        for (int j=i; j < i+5; j++) {
            cout << a[j] << ' ';
        }
        cout << '\n';
    }

    cout << "\n\nTAMPILAN ARRAY KEDUA : \n";
    int indeks=0;
    for (int i=0; i < 5; i++) {
        for (int j=4; j > i; j--) {
            cout << ' ';
        }
        for (int j=0; j <= i; j++) {
            cout << a[indeks];
            indeks++;
        }
        cout << '\n';
    }

    return 0;
}