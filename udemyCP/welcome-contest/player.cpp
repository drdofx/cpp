#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// long long int getNegProd(vector<int> & neg) {
//     sort(neg.begin(), neg.end());
//     long long int negProd = 1;
//     for (size_t i = 0; i + 1 < neg.size(); i+=2) {
//         negProd *= neg[i];
//         negProd *= neg[i+1];
//     }
//     return negProd;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int p, x, temp;
    long long int total = 1;

    vector<int> pos, neg;

    cin >> p;
    bool hasZero = false;
    // while (p--) {
    //     cin >> x;
    //     temp = total * x;
    //     if (temp > total) total = temp;
    // }

    while (p--) {
        cin >> x;
        if (x > 0) pos.push_back(x);
        else if (x < 0) neg.push_back(x);
        else hasZero = true;
    }

    if (pos.empty()) {
        if (neg.size() >= 2) {
            sort(neg.begin(), neg.end());
            for (size_t i=0; i + 1 < neg.size(); i+=2) {
                total *= neg[i];
                total *= neg[i+1];
            }
        } else if (hasZero) {
            total = 0;
        } else {
            total = neg[0];
        }
    } else if (neg.size() < 2) {
        for (size_t i=0; i<pos.size(); i++) {
            total *= pos[i];
        }
    } else {
        for (size_t i=0; i<pos.size(); i++) {
            total *= pos[i];
        }
        for (size_t i=0; i<neg.size(); i++) {
            total *= neg[i];
        }
    }

    cout << total << '\n';
    return 0;
}