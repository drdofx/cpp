#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, str2;
    // int n;
    // cout << "masukkan jumlah kata: "; 
    // cin >> n;
    // for (int i=0; i < n; i++) {
    //     cout << "masukkan kata indeks ke - " << i << " : ";
    //     cin >> kata[i];
    // }

    // string str = ""; 
    // for (int i=0; i < strlen(str); i++) {

    // }

    // for (int i = 0; i < n; i++) { 
    //     str = str + kata[i]; 
    // }

    // for (int i=0; i < str.size(); i++) {
    //     cout << str[i] << ' ';
    // }

    // cout << '\n';

    // for (int i=str.size(); i >=0 ; i--) {
    //     cout << str[i-1] << ' ';
    // }

    // for (int i=0; i < str.size(); i++) {
    //     if (str[i] != str[str.size()-i-1]) {
    //         break;
    //     } else {
    //         cout << '\n' << str << " adalah kata palindrom" << endl;
    //         return 0;
    //     }
    // }
    
    // cout << '\n' << str << " bukan kata palindrom" << endl;
    cin >> str;
    str2 = str;
    reverse(str.begin(), str.end());

    if (str == str2) {
        cout << "palindrom" << endl;
    } else {
        cout << "bukan palindrom" << endl;
    }

    return 0;
}