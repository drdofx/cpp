// Lower bound

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int val) {
    int start = 0, end = A.size()-1, mid, index_found=-1;
    
    while (start <= end) {
        mid = (start+end) / 2;
        if (A[mid] == val) {
            index_found = mid;
            break;
        } else if (A[mid] > val) {
            end = mid-1;
        } else if (A[mid] < val) {
            index_found = start;
            start = mid+1;
        }
    }
    return (index_found >= 0) ? A[index_found] : -1;
}

int main() {
    vector<int> A = {-1,-1, 2, 3, 5};
    int v = -5;

    int result = lowerBound(A,v);
    cout << result << endl;

    return 0;
}