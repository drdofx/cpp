#include <iostream>

using namespace std; 
  
int main() 
{ 
    // Declare n = 26 (jumlah alfabet)
    int n = 26;

    // nested for loop hingga 26 baris
    for (int i=1; i <= n; i++) {
        // j mengikuti hitungan i, sehingga tiap baris alfabet depan berkurang
        for (int j=i; j <= n; j++) { 
        // print alfabet mengikuti ASCII, lalu menjadi char
        // contoh ASCII A adalah 65 dan i = j = 1
        // --> 65 - 1 + 1 = 65, maka muncul A di baris 1 huruf pertama
            cout << (char)('A' - 1 + j) << " "; 
        }
        cout << "\n";
    } 

    // exit program
    return 0; 
} 