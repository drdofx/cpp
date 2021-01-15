// Soal UAS No.2 - Muhammad Daffa Arviano

#include <bits/stdc++.h>

using namespace std;

void hitung(int arr[], int n) {
    bool terhitung[n] = { false };  // awalnya semua bilangan belum terhitung
  
    for (int i = 0; i < n; i++) { 
        if (terhitung[i] == true) continue; // jika nanti bilangan indeks ke-i sudah terhitung, skip ke indeks berikutnya
  
        // count dengan nested loop, jika ada bilangan yang sama maka jumlah+=1 dan ubah bool terhitung menjadi true
        int jumlah = 1; 
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] == arr[j]) { 
                terhitung[j] = true; 
                jumlah++; 
            } 
        } 
        cout << "|      " << arr[i] << "  |  " << jumlah << " |" << endl; 
    }     
}

int main() {
    int n;
    cout << "Masukkan jumlah bilangan: "; cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cout << "Masukkan bilangan ke-" << i << " : ";
        cin >> arr[i];
    }
    cout << "| Bilangan |  I |" << endl;
    hitung(arr, n);
    return 0;
}
