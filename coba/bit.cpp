#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x=0;
    string a;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        if (a ==  "++X" || a == "X++") {
            x+=1;
        } else {
            x-=1;
        }
    }

    cout << x << endl;

    return 0;
}