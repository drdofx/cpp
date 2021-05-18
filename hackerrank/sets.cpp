#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int y, x;
    set<int> s;
    for (int i=0; i<n; i++) {
        cin >> y >> x;
        if (y == 1) {
            s.insert(x);
        } else if (y == 2) {
            s.erase(x);
        } else if (y == 3) {
            set<int>::iterator itr=s.find(x);
            if (itr != s.end()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }   
    return 0;
}



