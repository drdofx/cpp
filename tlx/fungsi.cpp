#include <bits/stdc++.h> 

using namespace std; 

int fungsi(int a, int b, int x, int k) {
    for (int i=0; i<k; i++) {
        x = abs(a*x+b);
    }
    return x;
}

int main() {
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    int hasil = fungsi(a, b, x, k);
    cout << hasil << endl;
    return 0;  
}  