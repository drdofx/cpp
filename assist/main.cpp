#include <iostream>

using namespace std;

int main() {
    string str;
    int a;
    float b;
    double c;

    cout << "Masukan input string: ";
    cin >> str;

    cout << "Masukkan angka a: "; cin >> a;
    
    if (a > 50) {
        cout << "Angka a besar dari 50" << endl;
    } else if (a > 25) {
        cout << "Angka a besar dari 25" << endl;
    } else {
        cout << "Angka a kurang dari 25" << endl;
    }

    cout << str << endl;
}