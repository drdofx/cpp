#include <bits/stdc++.h>

using namespace std;

bool kabisat(int n) {
    if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)) return true;
    else return false;
}

int main() {
    int bul, tahun, jumlah;
    string bulan;
    cout << "Masukkan angka bulan: "; cin >> bul;
    cout << "Masukkan angka tahun: "; cin >> tahun;
    bool tahun_kabisat = kabisat(tahun);
    switch (bul)
	{
		case 1:
			bulan = "Januari";
            jumlah = 31;
			break;
		case 2:
			bulan = "Februari";
            if (tahun_kabisat) jumlah = 29;
            else jumlah = 28;
			break;
		case 3:
			bulan = "Maret";
            jumlah = 31;
			break;
		case 4:
			bulan = "April";
            jumlah = 30;
			break;
		case 5:
			bulan = "Mei";
            jumlah = 31;
			break;
		case 6:
			bulan = "Juni";
            jumlah = 30;
			break;
		case 7:
			bulan = "Juli";
            jumlah = 31;
			break;
		case 8:
			bulan = "Agustus";
            jumlah = 31;
			break;
		case 9:
			bulan = "September";
            jumlah = 30;
			break;
		case 10:
			bulan = "Oktober";
            jumlah = 31;
			break;
		case 11:
			bulan = "November";
            jumlah = 30;
			break;
		case 12:
			bulan = "Desember";
            jumlah = 31;
			break;
		default:
			bulan = "(Tidak Ada)";
            jumlah = 0;
			break;	
	}
    cout << "Nama bulan: " << bulan << endl;
    cout << "Jumlah hari dalam bulan " << bulan << ", tahun " << tahun << " adalah " << jumlah << " hari" << endl;
    return 0;
}
