#include <iostream>
using namespace std;

void insertion_sort(int a[], int n) {
    for (int i=1; i<n; i++) {
        int current = a[i];
        int prev = i-1;

        while (prev >= 0 && a[prev] > current) {
            a[prev+1] = a[prev];
            prev--;
        }

        a[prev+1] = current;
    }
}

int main() {
    int arr[] = {-2, 3, 4, -1, 5, -12,6, 1, 3};
    int n = sizeof(arr)/sizeof(int);

    insertion_sort(arr, n);
    for (auto x: arr) {
        cout << x << ", ";
    }

    return 0;
} 