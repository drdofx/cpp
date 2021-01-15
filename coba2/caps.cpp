#include <bits/stdc++.h>

using namespace std;

int main() {
    string p;
    cin >> p;
    bool check = true;
    for (int i=1; i < p.size(); i++) {
        if (!isupper(p[i])) {
            check = false;
            break;
        } 
    }
    if (!check) {
        cout << p << endl;
        return 0;
    } else { 
        if (!isupper(p[0])) p[0] -= 32;
        else p[0] += 32;
        for (int i=1; i < p.size(); i++) {
            p[i] += 32;
        }
        cout << p << endl;
        return 0;
    }
}