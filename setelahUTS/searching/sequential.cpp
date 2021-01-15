#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    int ix, x; cin >> x;
    int i=0;
    while (i < n && a[i]!=x) {
        i+=1;
    }
    
    if (a[i] == x) {
        ix=i;
    } else {
        ix=0;
    }
    cout << ix << endl;
    return 0;
}