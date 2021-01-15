#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "input N: ";
    cin >> n;

    int hasil=0;

    for (int i=1; i <= n; i++) {
        cout << i << endl;
        hasil+=i;
    }

    cout << "Jumlahnya: ";
    cout << hasil << endl;
    return 0;
}