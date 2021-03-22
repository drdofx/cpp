#include <bits/stdc++.h> 

using namespace std; 

template<typename T>

void kedekatan(vector<T> &M, int N, int D) {
    int hasil, max=0, min=100000000;
    for (int i=0; i < N; i++) {
        for (int j=i+1; j < N; j++) {
            hasil = pow(abs(M[i].first-M[j].first), D)+pow(abs(M[i].second-M[j].second), D);
            if (hasil > max) max = hasil;
            if (hasil < min) min = hasil;
        }
    }
    cout << min << " " << max << endl;
}

int main() {
    int N, D;
    int x, y;
    cin >> N >> D;
    vector <pair<int,int>> M;
    for (int i=0; i < N; i++) {
        cin >> x >> y;
        M.push_back(make_pair(x, y));
    }
    
    kedekatan(M, N, D);
    return 0;  
}  