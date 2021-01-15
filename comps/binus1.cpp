#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    int count,temp;
    for(int i=0; i<n; i++) {
        count=0;
        temp=0;
        for(int j=0; j<n; j++) {
            if (a[j][i] > temp) {
                temp=a[j][i];
                count++;
            }
        }
        cout << count << " ";
    }
    cout << "\n";

    for(int i=0; i<n; i++) {
        count=0;
        temp=0;
        for(int j=0; j<n; j++) {
            if (a[i][j] > temp) {
                temp=a[i][j];
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}