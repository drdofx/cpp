#include <bits/stdc++.h>

using namespace std;

int main() {
    long long detik_awal, menit, detik, jam, sisa_jam;
    cout << "Masukkan jumlah detik: ";
    cin >> detik_awal;

    jam = detik_awal / 3600;
    sisa_jam = detik_awal % 3600;
    menit = sisa_jam / 60;
    detik = sisa_jam % 60;

    cout << detik_awal << " detik = " << jam << " jam " << menit << " menit " << detik << " detik" << endl;

    return 0;
}
