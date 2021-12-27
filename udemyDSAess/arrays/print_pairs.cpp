#include <iostream>

using namespace std;

// time complexity: o(n^2)

void printAllPairs(int arr[], int n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            cout << arr[i] << ", " << arr[j] << endl;
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {2, 4, 5, 6, 10, 14, 19};
    int n = sizeof(arr) / sizeof(int);

    printAllPairs(arr, n);

    return 0;
}