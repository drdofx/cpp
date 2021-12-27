#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int w, count;
    string s;

    cin >> w;
    while (w--) {
        cin >> s;
        count = 0;
        for (int i=0; i<s.size()/2; i++) {
            if (s[i] != s[s.size()-i-1]) { 
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}