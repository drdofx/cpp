// Maximum subarray sum

#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int cs=0, ns=0, largest=0, real=0;
    for (int i=0; i<A.size(); i++) {
        cs += A[i];
        real += A[i];
        if (A[i] < 0) {
            ns = ns == 0 ? A[i] : max(ns, A[i]);
        }
        if (cs < 0) {
            cs = 0;
        }
        largest = max(cs, largest);
    }
    return (real < 0) ? ns : largest; 
}

int main() {
    vector<int> A = {5, 0, -1, 0, 1, 2, -1};

    cout << maxSumSubarray(A) << endl;

    return 0;
}