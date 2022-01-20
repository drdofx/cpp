#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, s, tracker=0;
    vector<int> num_s;
    cin >> n >> k;

    while (n--) {
        cin >> s;
        s = 5 - s - k;
        if (s >= 0) {
            num_s.push_back(s);
            if (num_s.size() % 3 == 0) tracker++;
        }
    }

    // sort(num_s.begin(), num_s.end());

    // for (auto x:num_s) {
    //     cout << x << endl;
    // }
    cout << tracker << '\n';
 
    return 0;
}