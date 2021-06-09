#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, value; cin >> n;
    vector<int> vect;
    for (int i=0; i<n; i++) {
        cin >> value;
        vect.push_back(value);
    } 
    int q; cin >> q;
    for (int i=0; i<q; i++) {
        cin >> value;
        vector<int>::iterator low;
        low = lower_bound(vect.begin(), vect.end(), value);
        if (vect[low-vect.begin()] == value) {
            cout << "Yes " << (low-vect.begin()+1) << endl;
        } else {
            cout << "No " << (low-vect.begin()+1) << endl;
        }
    }
    return 0;
}
