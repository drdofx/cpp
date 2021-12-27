#include <iostream>

using namespace std;

// time complexity: o(n)

bool linear_search(int* arr, int n, int val) {
    for (int i=0; i<n; i++) {
        if (arr[i] == val) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {12, 41, 5, 12, 56};

    int n = sizeof(arr)/ sizeof(int);

    int search_val = 5, other_search_val = 10;

    cout << linear_search(arr, n, search_val) << endl;
    cout << linear_search(arr, n, other_search_val) << endl;


    return 0;
}