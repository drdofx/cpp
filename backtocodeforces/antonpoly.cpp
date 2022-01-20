#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total=0;
    string s;
    cin >> n;

    map<string, int> polyhedrons = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    while (n--) {
        cin >> s;
        total += polyhedrons[s];
    }

    cout << total << '\n';
 
    return 0;
}