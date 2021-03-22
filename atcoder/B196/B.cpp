#include <bits/stdc++.h>

using namespace std;

int main() {
    string X, Y;
    cin >> X;
    for (int i=0; i<X.size(); i++) {
        if (X[i] != '.') Y+=X[i];
        else break;
    }
    cout << Y << endl;
    
    return 0;
}