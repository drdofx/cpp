#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n<2) {
        cout << n << endl;
        return 0;
    }

    int arr[32];
    int i=0;
    while (n>0) {
        arr[i] = n%2;
        n/=2;
        i++;
    }
    for(int j=i-1; j>=0; j--) {
        cout << arr[j] << ' ';
    }
    cout << '\n';
    return 0;
}