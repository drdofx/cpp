#include <bits/stdc++.h> 

using namespace std; 

void FP(int x) { 
    int n;
    for (int i = 2; i <= x; i++) {  
        if (x % i == 0) {
            n = 0;
            while (x % i == 0) {
                x /= i;
                n++;
            }
            if (n > 1) cout << i << "^" << n;
            else cout << i;

            if (x != 1) cout << " x ";
        }
    }  
    cout << endl;
}  

int main() {
    int n; cin >> n;
    FP(n);  
    return 0;  
}  