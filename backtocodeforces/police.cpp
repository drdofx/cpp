#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num_recruited=0, untreated=0, e;
    cin >> n;
    while (n--) {
        cin >> e;
        if (e > 0) num_recruited += e;
        else num_recruited > 0 ? num_recruited-- : untreated++;
    }

    cout << untreated << '\n';
 
    return 0;
}