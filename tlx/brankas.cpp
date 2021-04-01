#include <bits/stdc++.h> 

using namespace std; 
int n, k, catat[1000];
bool pernah[1000];

void brankas(int kedalaman) {
    if (kedalaman >= k) {
        bool cek = true;
        for (int i=1; i<k; i++) {
            if (catat[i] < catat[i-1]) cek = false;
        }
        if (cek) {
            for (int i=0; i<k; i++) {
                cout << catat[i] << ' ';
            }
            cout << '\n';
        }
    } else {
        for (int i=1; i<=n; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                brankas(kedalaman+1);
                pernah[i] = false;
            }
        }
    }
}

int main() {
    cin >> n >> k;
    brankas(0);
    return 0;  
}  