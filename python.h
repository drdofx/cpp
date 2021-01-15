#include <bits/stdc++.h>

#define F0R(i, a) for (int i = 0; i < (a); i++)

using namespace std;

string input() {
    cout << "Masukkan input: ";
    string str;
    cin >> str;
    return str;
}

string print(string str) {
    cout << str << '\n';
    return str;
}

string reverse(string str) {
    reverse(str.begin(), str.end());
    return str;
}

void unique(vector<int> a) {
    int length = a.size();
    sort(a.begin(), a.end()); 
    for (int i=0; i < length; i++) {
        if (a[i] == a[i+1]) {
            continue;
        } else {
            if (i==length-1) cout << a[i] << " ";
            else cout << a[i] << ", ";
        }
    }
    cout << '\n';
}