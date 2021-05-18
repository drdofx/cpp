#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, k, x, y, value;
    cin >> n >> q;
    vector<vector<int>> vect;
    for (int i=0; i<n; i++) {
        cin >> k;
        vector<int> vectno;
        for (int j=0; j<k; j++) {
            cin >> value;
            vectno.push_back(value);
        }
        vect.push_back(vectno);
    }
    for (int i=0; i<q; i++) {
        cin >> x >> y;
        cout << vect[x][y] << endl;
    }
    return 0;
}