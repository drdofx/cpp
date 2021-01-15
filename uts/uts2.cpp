#include <iostream>
#include <string>
using namespace std;

int main()
{
    float tugas, uts, uas;
    char indeks;
    string nama;

    cout << "Masukkan nama: ";
    cin >> nama;

    tugas:   
        cout << "nilai tugas: ";
        cin >> tugas;
        if (tugas < 0 || tugas > 100) {
            goto tugas;
        }
        tugas *= 0.3;
    uts:
        cout << "nilai uts: ";
        cin >> uts;
        if (uts < 0 || uts > 100) {
            goto uts;
        }
        uts *= 0.3;
    uas:
        cout << "nilai uas: ";
        cin >> uas;
        if (uas < 0 || uas > 100) {
            goto uas;
        }
        uas *= 0.4;
    cout << endl;

    float nilai_akhir = tugas + uts + uas;

    if (nilai_akhir >= 90.0) {
        indeks='A';
    } else if (nilai_akhir >= 80.0 && nilai_akhir < 90.0) {
        indeks='B';
    } else if (nilai_akhir >= 70.0 && nilai_akhir < 80.0) {
        indeks='C';
    } else {
        indeks='D';
    }

    cout << "Nama: " << nama << endl;
    cout << "Nilai akhir: " << nilai_akhir << endl;
    cout << "Indeks nilai: " << indeks << endl;

    return 0;
}