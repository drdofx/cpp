#include <iostream>

using namespace std;

// time complexity: o(log n)
// search space is monotonic (non-decreasing or non-increasing)

bool binary_search(int arr[], int n, int val) {
    int start = 0, end = n-1, mid;
    while (start <= end) {
        mid = (start+end) / 2;
        if (arr[mid] == val) {
            return true;
        } else if (arr[mid] > val) {
            end = mid-1;
        } else if (arr[mid] < val) {
            start = mid+1;
        }
    }
    return false;
}

int main() {
    int arr[] = {2, 4, 5, 6, 10, 14, 19};
    int n = sizeof(arr) / sizeof(int);

    cout << binary_search(arr, n, 10) << endl;
    cout << binary_search(arr, n, 3) << endl; 

    return 0;
}