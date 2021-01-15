#include <bits/stdc++.h>

using namespace std;

long long factorial(long long x) {
    long long hasil = 1;
    cout << x << "! = ";
    if (x == 0) {
        cout << "1 => ";
        return hasil;
    }
    for (int i=1; i<=x; i++) {
        if (i == x) cout << i << " => ";
        else cout << i << " x ";
        hasil *= i;
    }
    return hasil;
}

int main() {
    long long n;
    cin >> n;
    long long hasil = factorial(n);

    cout << hasil << endl; 

    return 0;
}
