#include <bits/stdc++.h>

using namespace std;

void isiArraydanSort(int a[], int n) {
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n; cout << "Masukkan nilai n: "; cin >> n;
    int a[n];

    isiArraydanSort(a, n);

    int ix, x; cout << "Masukkan nilai x: "; cin >> x;

    int i=0;
    while (i < n && x > a[i]) {
        i+=1;
    }

    if (a[i] == x) {
        ix=i+1;
    } else {
        ix=0;
    }
    cout << "hasil: " << ix << endl;
    return 0;
}