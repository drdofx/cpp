#include <iostream>

using namespace std;

int main(){
    int a, b, temp;
    cin >> a; cin >> b;
    temp = a;
    a = b;
    b = temp;

    cout << a; cout << b;
    return 0;
}
