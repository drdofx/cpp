// Sorted pair sum

#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    int n = arr.size(), max=0, temp;
    pair <int, int> closestPair{0, 0};
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            temp = arr[i] + arr[j];
            if (temp > max && temp <= x) {
                max = temp;
                closestPair.first = arr[i];
                closestPair.second = arr[j];
            }
        }
    }
    return closestPair;
}

int main() {
    vector<int> A = {10, 22, 28, 29, 30, 40};
    int x = 34;

    pair<int, int> p = closestSum(A, x);
    cout << p.first << " - " << p.second << endl;
    return 0;
}