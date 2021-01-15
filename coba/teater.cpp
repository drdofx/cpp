#include <bits/stdc++.h>

using namespace std;

int main() {
    double m, n, a;
    long long flag;

    cin >> m >> n >> a;

    flag = ceil(m/a) * ceil(n/a);

    cout << flag << endl;

    return 0;
}