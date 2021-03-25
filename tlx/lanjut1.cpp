#include <bits/stdc++.h> 

using namespace std; 

void batang(int x) {
    if (x == 0) {
        printf("daun\n");
    } else {
        batang(x - 1);
        cout << x << endl;
        batang(x - 1);
    }
}

int main() {
    int n; cin >> n;
    batang(n);
    return 0;  
}  