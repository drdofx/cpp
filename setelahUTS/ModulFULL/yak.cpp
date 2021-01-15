#include <bits/stdc++.h>

using namespace std;

void isi(int a[], int n) {
    for (int i=0; i<n; i++) {
        cout << "\nMasukkan array indeks ke-" << i << ": ";
        cin >> a[i];
    }
} 

int unique(int a[], int n) {
    // Saya menggunakan metode sort untuk melakukan pengecekan angka sama dengan mudah
    // Namun saya membuat array baru dan mencopy array original ke array tersebut
    // Supaya array original tidak ikut ke sort dan masih dalam bentuk awal
    int b[n];
    copy(a, a+n, b);
	sort(b, b+n);
    for (int i=0; i < n; i++) {
        if (b[i] == b[i+1]) {
            return false;
        } 
    }
    return true;
}

void count(int a[], int n) {
    double total=0;
    for (int i=0; i < n; i++) {
        total+=a[i];
    }
    double mean=total/n;
    cout << "Total Bilangan: " <<  total << endl;
    cout << "Rata-rata: " << mean << endl;
}

void hasil_count(int a[], int n) {
    cout << "Isi Bilangan dalam array: ";
    for (int i=0; i<n; i++) {
        if (i == n-1) cout << a[i] << endl;
        else cout << a[i] << ", ";
    }   
    count(a, n);
}

int main() {
    int n; cout << "Masukkan ukuran array: "; cin >> n; //batasan adalah 100
    int arr[100]; // ukuran maks array adalah 100
    // Call procedure pertama (isi array)
    cout << "PROCEDURE PERTAMA" << endl;
    isi(arr, n);
    // Call function kedua (apakah ada angka yang sama) 
    // return true apabila tidak ada yang sama
    // return false apabila ada yang sama
    cout << '\n';
    cout << "FUNCTION KEDUA" << endl;
    int apakah_himpunan = unique(arr, n);
    // // apabila true, output himpunan
    if (apakah_himpunan) cout << "ANGKA TIDAK ADA YANG SAMA, Himpunan!" << endl;
    else cout << "ANGKA ADA YANG SAMA, Bukan Himpunan!" << endl;

    // Call procedure keempat, yang di dalamnnya sudah sekaligus call procedure tiga
    cout << '\n';
    cout << "PROCEDURE KETIGA DAN KEEMPAT" << endl;
    hasil_count(arr, n);

    // exit program
    return 0;
}

