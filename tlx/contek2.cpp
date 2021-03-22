#include <bits/stdc++.h>

using namespace std;

string getStatus(int x) {
    if (x % 2 == 1) {
        return "a";
    } else {
        return "b";
    }
}

void printStatus(int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << getStatus(i) << endl;
    }
}

int main() {
    printStatus(10, 12);
    printStatus(10, 8);
    return 0;
}