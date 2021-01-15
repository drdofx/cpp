#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x[100], y[100], z[100];
    cin >> n;

    for (int i=0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }

    int sum_x = accumulate(x, x+n, 0);
    int sum_y = accumulate(y, y+n, 0);
    int sum_z = accumulate(z, z+n, 0);
    
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) cout << "YES\n";
    else cout << "NO\n"; 

    return 0;
}