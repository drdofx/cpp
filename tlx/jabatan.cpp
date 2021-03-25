#include <bits/stdc++.h> 

using namespace std; 

int jabatan(int a, int b) {
        if (b == 0) {
            return 1;
        } else if (b % 2 == 1) {
            return a * jabatan(a, b - 1);
        } else {
            int temp = jabatan(a, b / 2);
            cout << "temp is " << temp << endl;
            return temp * temp;
        }
}
int main() {    
    int hasil = jabatan(2, 5);
    cout << hasil << endl;
    return 0;  
}  