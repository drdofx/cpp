// Soal UAS No.1 - Muhammad Daffa Arviano

#include <bits/stdc++.h>

using namespace std;

struct Nilai {
    int NIM, nilai;
    char indeks;
} dataMhs[25];

void indeksNilai(int n) {
    for (int i=0; i<n; i++) {
        cout << "Masukkan NIM: "; cin >> dataMhs[i].NIM;
        cout << "Masukkan Nilai: "; cin >> dataMhs[i].nilai;
        if (dataMhs[i].nilai >= 90) dataMhs[i].indeks = 'A';
        else if (dataMhs[i].nilai < 90 && dataMhs[i].nilai >= 80) dataMhs[i].indeks = 'B';
        else if (dataMhs[i].nilai < 80 && dataMhs[i].nilai >=70)  dataMhs[i].indeks = 'C';
        else dataMhs[i].indeks = 'D';
    }
}

int main() {
    int n;
    cout << "input jumlah mahasiswa(maks 25): "; cin >> n;
    indeksNilai(n);
    cout << "| NIM       | NILAI AKHIR  | INDEKS NILAI | " << endl;
    for (int i=0; i<n; i++) {
        cout << "| " << dataMhs[i].NIM << "  |      " << dataMhs[i].nilai << "        |  " << dataMhs[i].indeks << "     " << endl;
    }
    return 0;
}
