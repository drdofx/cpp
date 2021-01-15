#include <bits/stdc++.h>

using namespace std;

struct Barang {
    string nama;
    double harga, jumlah, total;
} dataBarang[10];

void isiData() {
    dataBarang[0].nama = "beras";
    dataBarang[1].nama = "jagung";
    dataBarang[2].nama = "minyak goreng";
    dataBarang[3].nama = "gula";
    dataBarang[4].nama = "susu";
    dataBarang[5].nama = "daging";
    dataBarang[6].nama = "sayur";
    dataBarang[7].nama = "tepung";
    dataBarang[8].nama = "telur";
    dataBarang[9].nama =  "aqua";
    for (int i=0; i<10; i++) {
        cout << "INPUT ITEM KE-" << i+1 << endl;
        cout << "input harga untuk item (" << dataBarang[i].nama << "): "; cin >> dataBarang[i].harga;
        cout << endl;
    }
}

void perHari() {
    for (int i=0; i<10; i++) {
        cout << "input jumlah terjual untuk item (" << dataBarang[i].nama << "): "; cin >> dataBarang[i].jumlah;
        dataBarang[i].total = dataBarang[i].harga * dataBarang[i].jumlah;
    }
}

int main() {
    isiData();
    perHari();
    cout << "| Nama item barang | Harga per item | jumlah terjual | total per item |"<< endl;
    for(int i=0; i < 10; i++) {
        cout << "| " << dataBarang[i].nama << "                 " << dataBarang[i].harga << "               " << dataBarang[i].jumlah<< "                " << dataBarang[i].total <<endl;
    }

    double total_semua = 0;
    for (int i=0; i < 10; i++) {
        total_semua += dataBarang[i].total;
    }

    double max = 0;
    string barang_laku;
    for (int i=0; i < 10; i++) {
        if (dataBarang[i].jumlah > max) {
            max = dataBarang[i].jumlah;
            barang_laku = dataBarang[i].nama;
        }
    }

    cout << "Total penjualan: " << total_semua << endl;
    cout << "Item yang paling laku: " << barang_laku << ", dengan jumlah terjual: " << max << endl;
    return 0;
}