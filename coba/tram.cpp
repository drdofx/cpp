#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1000], b[1000], jumlah=0, maks=0;
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> a[i] >> b[i];
        jumlah-=a[i], jumlah +=b[i];
        if (jumlah > maks) {
            maks = jumlah;
        }
    }

    cout << maks << endl;
    return 0;
}