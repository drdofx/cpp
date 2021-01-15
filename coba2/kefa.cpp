#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, total=1, handler=0;
    cin >> n;
    int a[n];
    for (int i=0; i < n; i++) {
        cin >> a[i];
    }
    for (int i=1; i < n; i++) {
        if (a[i] >= a[i-1]) total+=1;
        else {
            if (total > handler) {
                handler = total;
                total=1;
            }
            else total=1;
        }
    }
    if (handler > total) cout << handler << endl;
    else cout << total << endl;
    return 0;
}