#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num_anton=0;
    string s;

    cin >> n >> s;
    
    for (int i=0; i<n; i++) {
        s[i] == 'A' ? num_anton++ : num_anton--;
    }

    if (num_anton > 0) cout << "Anton\n";
    else if (num_anton == 0) cout << "Friendship\n";
    else cout << "Danik\n";
 
    return 0;
}