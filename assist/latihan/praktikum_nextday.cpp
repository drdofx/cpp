#include <iostream>

using namespace std;

int main ()
{
    int hari, jumlah_hari, bulan, tahun, kabisat;
    bool penandaKabisat;
    cout<<"Masukkan hari (contoh 20): ";
    cin>>hari;
    cout<<"Masukkan bulan (contoh 1): ";
    cin>>bulan;
    cout<<"Masukkan tahun (contoh 2022): ";
    cin>>tahun;

    /*
    Definisi Tahun Kabisat
    * Penentuan rumus kabisat
    *
    */
    if (tahun % 400 == 0 || tahun % 4 == 0){
        kabisat = true;
    }
    else if (tahun % 100 == 0){
        kabisat = false;
    }

    if (bulan == 1 || bulan == 3 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 11 || bulan == 12) {
        jumlah_hari = 31;        
    } else if (bulan == 2) {
        if (kabisat == true){
            jumlah_hari = 29;
        } else {
            jumlah_hari = 28;
        }
    } else {
        jumlah_hari = 30;
    }

    if (hari < jumlah_hari) {
        hari += 1;
    } else {
        hari = 1;
        if (bulan == 12) {
            bulan = 1;
            tahun += 1;
        } else {
            bulan += 1;
        }
    }

	cout<<"NEXTDAY :\n";
    cout<<hari<<" ";
    cout<<bulan<<" ";
    cout<<tahun<<" ";;
	
    return 0;
}