#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, free=0;
    cin >> n;
    vector <pair<int, int>> vect;

    for (int i=0; i<n; i++) {
        cin >> a >> b;
        vect.push_back(make_pair(a, b));
        if (vect[i].first + 2 <= vect[i].second) {
            free++;
        }
    }

    cout << free << endl;
    return 0;
}
