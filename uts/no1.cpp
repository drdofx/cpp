#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double bunga, deposit, saldo_akhir;
    int tahun;

    cout << "Masukkan deposit: ";
    cin >> deposit;

    inputbunga:
        cout << "Masukkan persentase bunga: ";
        cin >> bunga;
        if (bunga < 0.01 || bunga > 100) {
            goto inputbunga;
        }

    inputtahun:
        cout << "Masukkan tahun: ";
        cin >> tahun;
        if (tahun < 1) {
            goto inputtahun;
        }

    for (int i=1; i <= tahun; i++) {
        saldo_akhir = deposit * pow(1.0 + bunga/100, tahun);
    }

    cout << "Jumlah saldo akhir: " << saldo_akhir << endl;

}