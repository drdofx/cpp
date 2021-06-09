#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            cout << ' ';
        }
        for (int j=0; j<=i; j++) {
            cout << '#';
        }
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    staircase(n);

    return 0;
}