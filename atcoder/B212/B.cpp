#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == b == c == d ||
    c > b || b == a) {
        cout << "Weak\n";
    }  else {
        cout << "Strong\n";
    }

    return 0;
}