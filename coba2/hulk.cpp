#include <bits/stdc++.h>

#define a1 cout << "I hate that ";
#define a2 cout << "I love that ";
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=1; i < n; i++) {
        if (i % 2 == 1) {
            a1;
        }
        else {
            a2;
        }
    }

    if (n%2 == 1) {
        cout << "I hate it" << endl;
    } else {
        cout << "I love it" << endl;
    }
    
    return 0;
}