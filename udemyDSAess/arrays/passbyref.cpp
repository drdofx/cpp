#include <iostream>

using namespace std;

void passByRef(int arr[], int n) {
    cout << "in pass by ref func " << sizeof(arr) << endl;

    int n_in_func = sizeof(arr)/sizeof(int);


    for (int i=0; i<n_in_func; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr)/sizeof(int);

    cout << "in main func " << sizeof(arr) << endl;

    for (int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }

    passByRef(arr, n);

    return 0;
}