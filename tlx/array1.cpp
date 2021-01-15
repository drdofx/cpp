#include <bits/stdc++.h>
#include <cstdio>
using namespace std;


int main() {
    int arr[105],n=0;

    while (scanf("%d", &arr[n]) != EOF) {
        n++;
    }

    for (int i=n-1; i >= 0; i--) {
        cout << arr[i] << '\n';
    }

    return 0;
}