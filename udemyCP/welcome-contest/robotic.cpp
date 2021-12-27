#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << (c - (-b)) / a << '\n';
    }

    return 0;
}