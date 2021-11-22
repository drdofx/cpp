#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int* pointer = &a;
    int &ref = a;

    int b = 1;

    cout << pointer << endl;

    cout << *pointer << endl;
    cout << ref << endl;

    a++;

    cout << ref << endl;

    ref = b;
    cout << ref << endl;
    return 0;
}