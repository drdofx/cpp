#include <bits/stdc++.h>

using namespace std;

struct data_tanggal {
    int t, b, th;
} hasil;

bool kabisat(int n) {
    if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)) return true;
    else return false;
}

void nextday() {
    tanggal:
        cout << "\nMasukkan tanggal: ";
        cin >> hasil.t;
        if (hasil.t < 1 || hasil.t > 31) goto tanggal;
    bulan:
        cout << "Masukkan bulan: "; 
        cin >> hasil.b;
        if (hasil.b < 1 || hasil.b > 12) goto bulan;

    cout << "Masukkan tahun: ";
    cin >> hasil.th;
        
    bool apakah_kabisat = kabisat(hasil.th);
    if (apakah_kabisat) cout << "\nTAHUN KABISAT!\n";
    else cout << "\nBUKAN TAHUN KABISAT!\n";

    switch (hasil.b) {
        case 1: case 3: case 5: case 7: case 8: case 10:
            if (hasil.t < 31) hasil.t+=1;
            else if (hasil.t==31) hasil.t=1, hasil.b+=1;
            break;
        case 4: case 6: case 9: case 11:
            if (hasil.t < 30) hasil.t+=1;
            else if (hasil.t==30) hasil.t=1, hasil.b+=1;
            else goto tanggal;
            break;
        case 12:
            if (hasil.t < 31) hasil.t+=1;
            else if (hasil.t==31) hasil.t=1, hasil.b=1, hasil.th+=1;
            break;
        case 2:
            if (!apakah_kabisat) {
                if (hasil.t < 28) hasil.t+=1;
                else if (hasil.t==28) hasil.t=1, hasil.b+=1;
                else goto tanggal;
            } else {
                if (hasil.t < 29) hasil.t+=1;
                else if (hasil.t==29) hasil.t=1, hasil.b+=1;
                else goto tanggal;
            }
    }

    cout << "\nBesok tanggal: " << hasil.t << "/" << hasil.b << "/" << hasil.th << endl;
}

int main() {
    nextday();
    return 0;
}

