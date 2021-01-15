#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;

    for (int t=0; t<test; t++) {
        int n;
        cin >> n;
        int arr[n];
        
        for (int a=0; a<n; a++) {
            cin >> arr[a];
        }

        sort(arr, arr+n);

        int b = arr[n-1] - arr[0];

        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                b = min(b, arr[j] - arr[i]);
            }
        }

        cout << b << endl;
    }
    return 0;
}
