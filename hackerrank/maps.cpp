#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q; cin >> q;
    int type, y;
    string x;
    map<string, int> m; 
    for (int i=0; i<q; i++) {
        cin >> type;
        if (type == 1) {
            cin >> x >> y;
            map<string,int>::iterator itr=m.find(x); 
            if (itr != m.end()) {
                m[x] += y;
            } else {
                m.insert(make_pair(x, y));
            }
        } else if (type == 2) {
            cin >> x;
            m.erase(x);
        } else if (type == 3) {
            cin >> x;
            map<string,int>::iterator itr=m.find(x); 
            if (itr != m.end()) {
                cout << m[x] << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}



