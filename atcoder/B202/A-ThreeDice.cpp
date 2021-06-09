#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> pair;
    pair.insert(make_pair(1, 6));
    pair.insert(make_pair(2, 5));
    pair.insert(make_pair(3, 4));
    pair.insert(make_pair(4, 3));
    pair.insert(make_pair(5, 2));
    pair.insert(make_pair(6, 1));
    int a, b, c;
    cin >> a >> b >> c;
    cout << pair[a] + pair[b] + pair[c] << endl;
    return 0;
}