#include <bits/stdc++.h>

using namespace std;

int main() {
    int current, N, count; cin >> N;
    for (int i=0; i<N; i++) {
        cin >> current;
        if (current == 1) {
            cout << "YA\n";
            continue;
        }
        count = 0;
        for (int i=2; i <= floor(sqrt(current)); i++) {
            if (current%i==0) {
                count+=2;
            }
        }
        if (count>2) cout << "BUKAN\n";
        else cout << "YA\n";
    }
    return 0;
}