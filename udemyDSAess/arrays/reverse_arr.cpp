#include <iostream>

using namespace std;

// time complexity: o(n)

void reverseArray(int arr[], int n) {
    int s = 0, e = n - 1, mid;
    while (s<e) {
        swap(arr[s], arr[e]);
        s+=1, e-=1;
    }
}


int main() {
    int arr[] = {2, 4, 5, 6, 10, 14, 19};
    int n = sizeof(arr) / sizeof(int);

    reverseArray(arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }
    cout << '\n';

    return 0;
}