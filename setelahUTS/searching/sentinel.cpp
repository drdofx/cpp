#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cout << "masukkan nilai n: "; cin >> n;
    vector<int> a; int b;
    for (int i=0; i<n; i++) {
        cin >> b;
        a.push_back(b);
    }

    int ix;
    int x; cout << "Masukkan nilai x: "; cin >> x;    

    int size=a.size();
    int i=0;
    while (i < size && a[i] != x) {
       i+=1;
    }

    if (a[i] != x) {
        a.push_back(x);
        ix=0;
    } else {
        ix=i+1;
    }
    cout << "hasil: " << ix << endl;
    return 0;
}