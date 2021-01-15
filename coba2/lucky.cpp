#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    string str=to_string(n);
    int count=0;
    for (int i=0; i<str.size(); i++) {
        if (str[i] == '7' || str[i] == '4') count+=1;
    }
    
    if (count == 4 || count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}