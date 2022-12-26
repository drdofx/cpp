#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int result = min({(k*l/nl/n), (c*d/n), (p/np/n)});
    cout << result << endl;
    return 0;
}
