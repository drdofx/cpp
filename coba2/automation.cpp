#include <bits/stdc++.h>

using namespace std;

int main() {
    string p;
    cin >> p;
    for (int i=0; i < p.size(); i++) {
        p[i] += 32;
    }
    for (int i=0; i < p.size(); i++) {
        cout << p[i];
    }
    return 0;
}
