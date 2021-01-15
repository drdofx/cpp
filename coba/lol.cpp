#include <iostream>

using namespace std;
 
int main() {
    int n, * a, * b, total=0;;

    cout << "Input N: ";
    cin >> n;

    a = new int[n];
    b = new int[n];

    for (int i=0; i < n; i++) {
        cout << "input a ke-" << i+1 << ": ";
        cin >> a[i];
    }

    for (int i=0; i < n; i++) {
        cout << "input b ke-" << i+1 << ": ";;
        cin >> b[i];
    }

    for (int i=0; i < n; i++) {
        total += (a[i] > b[i]) ? 3 : (a[i] < b[i]) ? 0 : 1;
    }
    delete[] a;
    delete[] b;

    a = 0;
    b = 0;

    cout << "Total points Binus has collected is: " << total;
    return 0;
}