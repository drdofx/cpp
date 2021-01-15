#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, index;
    string str;
    vector <bool> alpha(26, false);
    cin >> n >> str;
    for (int i=0; i<n; i++) {
        if (!islower(str[i])) str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z') {
            index = str[i] - 'a';
        } else {
            continue;
        }
        alpha[index] = true;
    }

    for (int i=0; i<alpha.size(); i++) {
        if (alpha[i] == false) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
