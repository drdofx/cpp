#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string el;
    vector<string> s, t;

    for (int i=0; i<n; i++) {
        cin >> el;
        s.push_back(el);
    }

    for (int i=0; i<m; i++) {
        cin >> el;
        t.push_back(el);
    }

    set<string> st(t.begin(), t.end());

    for (auto x: s) {
        cout << (st.count(x) ? "Yes": "No") << endl;
    }

    return 0;
}