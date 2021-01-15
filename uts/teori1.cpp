#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "anekamakanan.";
    int jumlah_vokal, jumlah_char;

    jumlah_char = 0;
    jumlah_vokal = 0;

    for (int i=0; i <= str.size(); i++) {
        if (str[i] == 'a'|| str[i] == 'A'|| str[i] == 'i' || str[i] == 'I' || i == 'u' ||
        str[i] == 'U' || str[i] == 'e' || str[i] == 'E' || str[i] == 'o' || str[i] == 'O') {
            jumlah_vokal += 1;
        } else if (str[i] == '.') {
            cout << "Vokal: " << jumlah_vokal << endl;
            cout << "Char: " << jumlah_char << endl;
            return 0;
        }
        jumlah_char += 1;
    }
}