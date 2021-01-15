#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];

    for (int i=0; i < n; i++) {
        cin >> a[n];
    }

    for (int i=0; i < n-1; i++) {
        cin >> b[n];
    }

    sort(a, a+n);
    sort(b, b+n-1);
    int c[n];
    merge(a, a+n, b, b+n-1, c);
    for (int i=0; i < n*2-1; i++) {
        cout << c[i] << " ";
    }
    
    return 0;
}