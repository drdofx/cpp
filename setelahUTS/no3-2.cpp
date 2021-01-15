#include <bits/stdc++.h>

using namespace std;

int main() {
    char str[100];
    cout << "Masukkan kata: "; cin >> str;
 
    // Menampilkan kata awal
    cout << "Kata awal: ";
    for (int i=0; i < strlen(str); i++) {
        cout << str[i];
    }

    cout << '\n';

    // Menampilkan kata setelah dibalik
    cout << "Kata dibalik: ";
    for (int i=0; i < strlen(str); i++) {
        cout << str[strlen(str)-i-1];
    }

    for (int i=0; i < strlen(str); i++) {
        if (str[i] != str[strlen(str)-i-1]) {
            break; // apabila karakter ada yang tidak sama break dari loop
        } else {
            cout << '\n' << str << " adalah kata palindrom" << endl;
            return 0; // apabila semua karakter sama berarti palindrom, exit program
        }
    }

    // output bukan palindrom setelah break dari loop dan exit program  
    cout << '\n' << str << " bukan kata palindrom" << endl;
  
    return 0;
}