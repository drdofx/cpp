#include <bits/stdc++.h> 

using namespace std; 

int a, b;

int fungsi(int x, int k) {
    if (k==0) return x;
    else return abs(a*fungsi(x, k-1)+b);
}

int main() {
    int x, k;
    cin >> a >> b >> k >> x;
    int hasil = fungsi(x, k);
    cout << hasil << endl;
    return 0;  
}  