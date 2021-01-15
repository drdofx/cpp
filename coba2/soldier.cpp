#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[100], temp=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        if (a[i+1] < a[i]) {
            temp = a[i+1];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    return 0;
}