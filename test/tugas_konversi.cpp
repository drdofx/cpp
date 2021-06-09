#include <iostream>

using namespace std;

void konversi_desimal_ke_biner(int desimal) {
    if (desimal<2) {
       cout << desimal << endl; // base case, apabila desimal 0 atau 1 langsung print desimal tersebut 
    }

    int arr[32];
    int i=0;
    while (desimal>0) {
        arr[i] = desimal%2; // hasil modulo (0/1) dimasukan ke array
        desimal/=2; // desimal dibagi 2
        i++;
    }
    for(int j=i-1; j>=0; j--) {
        cout << arr[j]; // print biner dari indeks array paling akhir
    }
    cout << endl;
}

void konversi_biner_ke_desimal(long biner) {
    long desimal=0;
    int base=1; // awalnya 2^0, selanjutnya base dikali 2 selama bilangan biner belum habis
    int bit_terakhir; 

    while (biner>0) {
        bit_terakhir = biner % 10; // untuk mengambil bit paling kanan
        biner /= 10; // biner dibagi dengan 10 untuk menghilangkan bit paling kanan
        desimal += (bit_terakhir*base); // bit terakhir dikonversi dengan dikali base saat ini, kemudian tambahkan pada variable desimal
        base *= 2; // base dikali 2, mengikuti posisi bit (2^0, 2^1, 2^2, dll)
    }
    cout << desimal << endl; // hasil konversi binary to decimal
}

int main() {
    int desimal_no_1_sampai_5[5] = {97, 136, 577, 1056, 2073};
    long biner_no_6_sampai_9[4] = {1110001101, 10101010101, 10100001, 1111100000101};

    for (int i=0; i<5; i++) { 
        cout << i+1 << ". " << desimal_no_1_sampai_5[i] << " = ";
        konversi_desimal_ke_biner(desimal_no_1_sampai_5[i]);
    }
    for(int i=0; i<4; i++) {
        cout << i+6 << ". " << biner_no_6_sampai_9[i] << " = ";
        konversi_biner_ke_desimal(biner_no_6_sampai_9[i]);
    }
    return 0;
}