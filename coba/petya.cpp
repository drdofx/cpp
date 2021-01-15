#include <bits/stdc++.h>

using namespace std;

bool mycomp (char c1, char c2) {
    return tolower(c1)<tolower(c2);
}
    

int main() {
    char a[100], b[100];
    cin >> a;
    cin >> b;

    for (int i=0; i < strlen(a); i++) {
        a[i] = tolower(a[i]),
        b[i] = tolower(b[i]);
    }
    
    if (strcmp(a, b) == 0) cout << "0" << endl;
    else if (strcmp(a, b) < 0) cout << "-1" << endl;
    else cout << "1" << endl;

    return 0;
}