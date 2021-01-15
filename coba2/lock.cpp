#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, total=0;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;

    for (int i=0; i < n; i++) {
        total += min(abs(a[i]-b[i]), 10 - abs(a[i] - b[i]));
    }
    cout << total << endl;
    return 0;
}