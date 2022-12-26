#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int y, w;
    cin >> y >> w;

    float solve = max(y, w);
    solve = (6-solve+1) / 6 * 100;
    if (solve >= 100) cout << "1/1\n";
    else if (solve >= 83) cout << "5/6\n";
    else if (solve >= 66) cout << "2/3\n";
    else if (solve >= 50) cout << "1/2\n";
    else if (solve >= 33) cout << "1/3\n";
    else if (solve >= 16) cout << "1/6\n";
    else cout << "0/1\n";
 
    return 0;
}