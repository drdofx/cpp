#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, r, d;
    cin >> t;
    while (t--) {
        cin >> r >> d;
        if (r > d) {
            cout << "ROSE\n";
        } else if (r < d) {
            cout << "DAMON\n";
        } else {
            cout << "DRAW\n";
        }
    }

    return 0;
}