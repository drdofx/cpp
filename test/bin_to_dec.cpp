#include <iostream>

using namespace std;

int main() {
    long biner;
    cin >> biner;

    long desimal=0;
    int base=1; // awalnya 2^0, selanjutnya base dikali 2 selama biilangan biner belum habis
    int bit_terakhir; 

    while (biner>0) {
        bit_terakhir = biner % 10; // untuk mengambil bit paling kanan
        biner /= 10; // biner dibagi dengan 10 untuk menghilangkan bit paling kanan
        desimal += (bit_terakhir*base); // bit terakhir dikonversi dengan dikali base saat ini, kemudian tambahkan pada variable desimal
        base *= 2; // base dikali 2, mengikuti posisi bit (2^0, 2^1, 2^2, dll)
    }
    cout << desimal << endl; // hasil konversi binary to decimal
    return 0;
}