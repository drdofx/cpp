#include <iostream>

using namespace std;

int main() {
    float nilai_tugas, nilai_uts, nilai_uas;
    cout << "nilai tugas: "; cin >> nilai_tugas;
    cout << "nilai uts: "; cin >> nilai_uts;
    cout << "nilai uas: "; cin >> nilai_uas;

    float nilai_rata_rata = (nilai_tugas+nilai_uts+nilai_uas)/3;

    cout << "\nOutput nilai tugas: " << nilai_tugas << endl;
    cout << "\nOutput nilai uts: " << nilai_uts << endl;
    cout << "\nOutput nilai uas: " << nilai_uas << endl;

    cout << "\nOutput nilai rata-rata: " << nilai_rata_rata << endl;

}