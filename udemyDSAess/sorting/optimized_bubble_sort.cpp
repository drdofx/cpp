#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    for (int i=0; i<v.size()-1; i++){
        bool swapped = false;
        for (int j=0; j<v.size()-i-1; j++){
            if (v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    return v;
}

int main() {
    vector<int> arr = {-2, 3, 4, -1, 5, -12,6, 1, 3};

    vector<int> arr2 = optimizedBubbleSort(arr);
    for (auto x: arr2) {
        cout << x << ", ";
    }

    return 0;
}