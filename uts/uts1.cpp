#include <iostream>

using namespace std;

int main()
{
    // initialize variable
	double jumlah=0; // nilai awal
    int n;

    // input n
    cout << "Masukkan nilai n: ";
    cin >> n;

    // for loop untuk penyebut, jika penyebut genap -> minus, jika ganjil -> plus
	for (int i=1; i<=n; i++) {
		if (i % 2 == 0) {
            jumlah -= 1.0/i;
        } else {
            jumlah += 1.0/i;
        }
    }

    // pecahan per seratus
    jumlah *= 100;

    // output hasil dan exit program
    if (n % 2 == 0) {
	    cout << "S = 1 - 1/2 + 1/3 .... - 1/" << n << " => " << jumlah << "/100" << endl;
    } else {
        cout << "S = 1 - 1/2 + 1/3 .... + 1/" << n << " => " << jumlah << "/100" << endl;
    }

	return 0;
}