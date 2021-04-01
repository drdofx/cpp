#include <bits/stdc++.h> 

using namespace std; 
int n, catat[1000];
bool pernah[1000];

void zigzag(int kedalaman) {
    if (kedalaman >= n) {
        bool cek = true;
        for(int i=1; i<n-1; i++) {
            if ((catat[i-1] < catat[i] && catat [i] < catat[i+1]) ||
             (catat[i-1] > catat[i] && catat [i] > catat[i+1])) cek = false;
        }
        if (cek) {
            for (int i=0; i<n; i++) {
                cout << catat[i];
            }
            cout << '\n';
        }
    } else {
        for (int i=1; i<=n; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                zigzag(kedalaman+1);
                pernah[i] = false;
            }
        }
    }
}

int main() {
    cin >> n;
    zigzag(0);
    return 0;  
}  