#include <bits/stdc++.h>

using namespace std;

struct pecahan {
    int pembilang, penyebut;
};

void jumlah(pecahan a, pecahan b, pecahan c) {
    c.pembilang = (a.pembilang * b.penyebut) + (b.pembilang * a.penyebut);
    c.penyebut = (a.penyebut * b.penyebut);
    cout << "\nPENJUMLAHAN\n";
    cout << a.pembilang << "/" << a.penyebut << " + " << b.pembilang <<  "/"<< b.penyebut <<
    " = " << c.pembilang << "/" << c.penyebut << endl;
}

void kurang(pecahan a, pecahan b, pecahan c) {
    c.pembilang = (a.pembilang * b.penyebut) - (b.pembilang * a.penyebut);
    c.penyebut = (a.penyebut * b.penyebut);
    cout << "\nPENGURANGAN\n";
    cout << a.pembilang << "/" << a.penyebut << " - " << b.pembilang <<  "/"<< b.penyebut <<
    " = " << c.pembilang << "/" << c.penyebut << endl;
}

void kali(pecahan a, pecahan b, pecahan c) {
    c.pembilang = (a.pembilang * b.pembilang);
    c.penyebut = (a.penyebut * b.penyebut);
    cout << "\nPERKALIAN\n";
    cout << a.pembilang << "/" << a.penyebut << " * " << b.pembilang <<  "/"<< b.penyebut <<
    " = " << c.pembilang << "/" << c.penyebut << endl;
}

void bagi(pecahan a, pecahan b, pecahan c) {
    c.pembilang = (a.pembilang * b.penyebut);
    c.penyebut = (a.penyebut * b.pembilang);
    cout << "\nPEMBAGIAN\n";
    cout << a.pembilang << "/" << a.penyebut << " / " << b.pembilang <<  "/"<< b.penyebut <<
    " = " << c.pembilang << "/" << c.penyebut << endl;
}

int main() {
    pecahan a, b, c;  

    cin >> a.pembilang;
    cin >> a.penyebut;
    cin >> b.pembilang;
    cin >> b.penyebut;
    
    char operasi;
    cout << "Masukkan operasi (+/-/*/(/)): "; cin >> operasi;
    if (operasi == '+') jumlah(a, b, c);
    else if (operasi == '-') kurang(a, b, c);
    else if (operasi == '*') kali(a, b, c);
    else if (operasi == '/') bagi(a, b,c );
    else {
        jumlah(a, b, c);
        kurang(a, b, c);
        kali(a, b, c);
        bagi(a, b, c);
    }
    return 0;
}