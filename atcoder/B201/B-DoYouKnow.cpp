#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<string,int> &a,
              const pair<string,int> &b)
{
    return (a.second > b.second);
}


int main() {
    int n, t; cin >> n;
    string s;
    vector<pair<string, int>> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), sortbysec);
    cout << v[1].first << endl;
    return 0;
}