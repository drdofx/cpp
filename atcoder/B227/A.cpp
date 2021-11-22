#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K, A;
    cin >> N >> K >> A;
    int curr_person = A;
    K--;
    while (K > 0) {
        // cout << "cur " << curr_person << "k " << K << endl;
        if (curr_person != N) {
            curr_person++;
        } else {
            curr_person = 1;
        }
        K--;
    }

    cout << curr_person << endl;
    return 0;
}