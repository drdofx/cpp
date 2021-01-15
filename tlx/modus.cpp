#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[100000], modus, count, x=1;
    cin >> n;

    for (int i=0; i < n; i++) {
        cin >> a[i];
    }

    modus = a[0];    
    for(int i=0; i < n-1; i++) {
        if (a[i] > 0) {
            count=1;
            for (int j=i+1; j < n; j++) {
                if (a[i] == a[j]) {
                    a[j] = 0;
                    count +=1;
                }
            }
            if (count > x) {
                x=count;
                modus = a[i];
            } else if (count == x && a[i] > modus) {
                x=count;
                modus = a[i];
            }
        }
    }    

    cout << modus << endl;
    return 0;
}