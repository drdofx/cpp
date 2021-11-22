#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long ans = 0;
    for (long long i=1; i*i*i <= N; i++) {
        for (long long j=i; i*j*j <= N; j++) {
            ans += N/i/j-j+1;
        }
    }

    cout << ans << endl;
    return 0;
}