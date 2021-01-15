#include <iostream>
#include <ctype.h>
#include <sstream>

using namespace std;

int main() {
    // Declare variablel long faktorial, string str int n
    unsigned long long faktorial=1;
    string str;
    int n;

    // label input
    input:
    cout << "input number n: ";
    cin >> str;

    // check input number atau bukan. Jika bukan number atau number minus, input ulang
    for (int i=0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            stringstream ok(str);
            ok >> n;
        } else {
            goto input;
        }
    }

    // for loop faktorial
    for (int i=0; i <= n; i++) {
        if (i == 0 || i == 1) {
            cout << i << "! = " << 1 << endl;
        } else {
            faktorial *= i;
            cout << i << "! = " << i << " x " << i-1 << "! = " << faktorial << endl;
        }
    }

    // output hasil dan exit program
    cout << "----------------" << endl;
    cout << n << "! = " << faktorial << endl;

    return 0;
}