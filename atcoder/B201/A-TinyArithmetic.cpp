#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> A(3);
    for (int i=0; i<3; i++) cin >> A[i];
    sort(A.begin(), A.end());
    if (A[2]-A[1] == A[1]-A[0]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}