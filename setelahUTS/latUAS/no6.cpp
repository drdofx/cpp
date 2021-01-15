#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int x; cin >> x;
    int low=0, high=n-1, mid, posisi=-1;
    while (low <= high) {
        mid = (high+low) / 2;
        if (arr[mid] == x) {
            posisi = mid;
            break;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    for (int i=0; i<n; i++) {
        cout << arr[i] << ' ';
    }

    cout << "\nNilai X: " << x;
    cout << "\nPosisi indeks (-1 jika tidak ketemu): " << posisi << endl;  

    return 0;
}