#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, temp, curr;
    cin >> n;

    cin >> temp; n--;

    while (n--) {
        cin >> curr;
        if (curr <= temp) break;
        temp = curr;
    }

    cout << temp << '\n';
    return 0;
}