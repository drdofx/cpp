#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, c, p=0;
    cin >> n;

    for (int i=0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b + c >=2) p += 1;
    }
    cout << p;
    return 0;
}