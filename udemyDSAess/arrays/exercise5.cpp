#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    int n = a.size();

    if (n == k) {
        return a;
    }

    vector<int> res;

    for (int i=n-k; i<n; i++) {
        res.push_back(a[i]);
    }

    for (int i=0; i<n-k; i++) {
        res.push_back(a[i]);
    }

    return res;
}

int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    int x = 3;

    vector<int> res = kRotate(v, x);

    for (int x: res) {
        cout << x << endl;
    }

    return 0;
}