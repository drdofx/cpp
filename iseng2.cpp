#include "python.h"

using namespace std;

int main() {
    // string str = input();
    // // print("Python di " + str);
    // str = reverse(str);
    // print(str);

    // int a=5;
    // F0R(i, a) {
    //     cout << i << endl;
    // }
    int arr[]={1, 1, 2, 3, 2, 2, 5, 1, 4, 3};
    int length=10;
    vector<int> myvector (arr,arr+length);

    print("Array tanpa duplicate: ");
    unique(myvector);
    return 0;
}