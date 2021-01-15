#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int pilih;
    int a=0 , b=0, c=0;
    for (int i=0; i<5; i++) {
        cin >> pilih;
        if (pilih==1) {
            a++;
        } else if(pilih == 2) {
            b++;
        } else if(pilih == 3) {
            c++;
        }
    }
    

    int suara[3] = {a, b, c};
    string nama[3] = {"Arman", "Bambang", "Cantika"};
    for (int i=0; i<3; i++) {
        cout << nama[i] << endl;
        cout << "suaranya: ";
        cout << suara[i] << endl;
    }

    int i=0;
    int temp;
    string tempNama;
    while (i < 3) {
        for (int j=0; j < 3; j++) {
            if(suara[i] > suara[j]) {
                temp = suara[i];
                tempNama = nama[i];

                suara[i] = suara[j];
                nama[i] = nama[j];

                suara[j] = temp;
                nama[j] = tempNama;
            }
        }
        i++;
    }

    cout << nama[2] << " adalah pemenang" << endl;
    return 0;
}
