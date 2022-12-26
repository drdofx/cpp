#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double c, d, hasil2;

    // Pangkat
    // c ^ d
    cout<<"### Operator matematika (float)"<<endl; 
    cout<<"Masukan Nilai 'c' dan 'd' !"<<endl; 
    cout<<"c : "; 
    cin>>c; 
    cout<<"d : "; 
    cin>>d; 

    hasil2 = pow(c, d);

    cout << "c ^ d : " << hasil2 << endl;

    // AKar
    hasil2 = sqrt(c);
    cout << "akar c: " << hasil2 << endl;
}