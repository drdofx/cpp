#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, el; cin >> t;
    while (t--) {
        int n; cin >> n;
        set<int> st;

        for (int i=0; i<n; i++) {
            cin >> el;
            if (st.count(el) == 0) st.insert(el);
            else st.insert(el*=-1);
        }

        cout << st.size() << endl;
    }

    return 0;
}
