#include <iostream>

using namespace std;

int main() {

    int cacah=0;
    int n;

    do {
        cout << "Masukkan bilangan: ";
        cin >> n;
        if (n != 9999) {
            cacah += 1;
        }
    } while (n != 9999);
    
    cout << "Hasil: " << cacah << endl;
}