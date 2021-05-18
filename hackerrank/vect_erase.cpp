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
    int x, a, b;
    cin >> x;
    vect.erase(vect.begin()+(x-1));
    cin >> a >> b;
    vect.erase(vect.begin()+(a-1), vect.begin()+(b-1));

    cout << vect.size() << endl;
    for (int i=0; i<vect.size(); i++) {
        cout << vect[i] << " ";
    }   
    cout << endl;
    return 0;
}
