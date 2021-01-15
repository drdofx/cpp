#include <iostream>
#include <algorithm> 
#include <numeric>

using namespace std;

int main() {
    int n=10;
    int arr[10];

    for (int i=0; i < n; i++) {
        cout << "Masukkan bilangan " << i+1 << " : ";
        cin >> arr[i];
    } 

    int jumlah = accumulate(arr, arr+10, 0);
    float mean = jumlah / 10.0;

    int* nilai_terbesar;
    nilai_terbesar = max_element(arr, arr+10);

    int* nilai_terkecil;
    nilai_terkecil = min_element(arr, arr+10);

    cout << "===================" << endl;
    cout << "Nilai rata-rata = " << mean << endl;
    cout << "Nilai terbesar = " << *nilai_terbesar << endl;
    cout << "Nilai terkecil = " << *nilai_terkecil << endl;

    return 0;
}