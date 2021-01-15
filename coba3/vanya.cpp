#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i=0, sum=0;
    cin >> n;
    while(sum <= n) {
        i++;
        sum += (i*(i+1))/2;
    }
    cout << i-1 << endl;
    return 0;
}
