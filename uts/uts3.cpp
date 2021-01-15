#include <iostream>
#include <string>
#include <vector>

using namespace std;

float tugas(float nilai) {
    nilai *= 0.3;
    return nilai;
}

float uts(float nilai) {
    nilai *= 0.3;
    return nilai;
}

float uas(float nilai) {
    nilai *= 0.4;
    return nilai;
}

int main()
{
    float nilai_tugas, nilai_uts, nilai_uas;
    char indeks;
    string nama;
    vector <string> nama_mahasiswa;
    vector <float> nilai_mahasiswa;
    vector <char> indeks_mahasiswa;

    float nilai_akhir;

    // For loop input data tiap mahasiswa hingga 20
    // Setiap data di push ke vector nama, nilai, dan indeks
    for (int i=1; i<=20; i++) {
        cout << "Masukkan nama: ";
        cin >> nama;
        nama_mahasiswa.push_back(nama);

        cout << "nilai tugas: ";
        cin >> nilai_tugas;
        cout << "nilai uts: ";
        cin >> nilai_uts;
        cout << "nilai uas: ";
        cin >> nilai_uas;

        nilai_akhir = tugas(nilai_tugas) + uts(nilai_uts) + uas(nilai_uas);
        nilai_mahasiswa.push_back(nilai_akhir);

        if (nilai_akhir >= 90.0) {
            indeks='A';
            indeks_mahasiswa.push_back(indeks);
        } else if (nilai_akhir >= 80.0 && nilai_akhir < 90.0) {
            indeks='B';
            indeks_mahasiswa.push_back(indeks);
        } else if (nilai_akhir >= 70.0 && nilai_akhir < 80.0) {
            indeks='C';
            indeks_mahasiswa.push_back(indeks);
        } else {
            indeks='D';
            indeks_mahasiswa.push_back(indeks);
        }

        // Untuk Clear Screen. Apabila tidak berfungsi, tolong dihapus line dibawah ini
        cout << "\033[2J\033[0;0H";
    }

    // for loop untuk menampilkan masing-masing nama, nilai, dan indeks
    // yang telah tersimpan dalam tiga vektor masing-masing
    for (int i=0; i < 20; i++) {
        cout << "Nama Mahasiswa: " << nama_mahasiswa[i] << endl;
        cout << "Nilai Akhir: " << nilai_mahasiswa[i] << endl;
        cout << "Indeks Nilai: " << indeks_mahasiswa[i] << endl;
        cout << "-----------------------\n\n";
    }

    // exit program
    return 0;
}