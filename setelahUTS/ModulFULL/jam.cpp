#include <bits/stdc++.h>

using namespace std;

struct data {
    int JAM, MENIT, DETIK;
} pertama, kedua, total, selisih;

void hasil() {
    cin >> pertama.JAM >> pertama.MENIT  >> pertama.DETIK ;
    cin >> kedua.JAM >> kedua.MENIT >> kedua.DETIK;

    total.JAM = pertama.JAM + kedua.JAM;
    total.MENIT = pertama.MENIT + kedua.MENIT;
    total.DETIK = pertama.DETIK + kedua.DETIK;

    if (total.DETIK > 60) total.DETIK -= 60, total.MENIT += 1;
    if (total.MENIT > 60) total.MENIT -= 60, total.JAM += 1;

    cout << "Jumlah jam: " << total.JAM << " Jam " << total.MENIT << " Menit " << total.DETIK << " Detik " << endl;

    if (pertama.JAM < kedua.JAM ||
    pertama.JAM == kedua.JAM && pertama.MENIT < kedua.MENIT ||
    pertama.JAM == kedua.JAM && pertama.MENIT == kedua.MENIT && pertama.DETIK < kedua.DETIK
    ) {
        selisih.JAM = kedua.JAM - pertama.JAM;
        selisih.MENIT = kedua.MENIT - pertama.MENIT;
        selisih.DETIK = kedua.DETIK - pertama.DETIK;
    } else {
        selisih.JAM = pertama.JAM - kedua.JAM;
        selisih.MENIT = pertama.MENIT - kedua.MENIT;
        selisih.DETIK = pertama.DETIK - kedua.DETIK;
    }

    if (selisih.DETIK < 0) selisih.DETIK += 60, selisih.MENIT -= 1;
    if (selisih.MENIT < 0) selisih.MENIT += 60, selisih.JAM -= 1;

    cout << "Selisih jam: " << selisih.JAM << " Jam " << selisih.MENIT << " Menit " << selisih.DETIK << " Detik " << endl;
}

int main() {
    hasil();
    return 0;
}