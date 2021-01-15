#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, str2;
    cin >> str;

    for (int i=0; i<str.size(); i++) {
        if (str[i] != 'a' && str[i] != 'i' && str[i] != 'u'
        && str[i] != 'e' && str[i] != 'o' && str[i] != 'y'
        && str[i] !='A' && str[i] !='E'&& str[i] !='O' 
        && str[i] !='I' && str[i] !='U'&&str[i] !='Y') {
            str2 += '.';
            str2 += towlower(str[i]);
        } else {
            continue;
        }
    }

    cout << str2 << endl;

    return 0;
}