#include <bits/stdc++.h> 

using namespace std; 

int fakt(int n) {
    if (n == 0 || n == 1) return 1;
    else {
        if (n % 2 == 0) {
            return n/2 * fakt(n-1);
        } else {
            return n * fakt(n-1);
        }
    }
}

int main() {    
    int n;
    cin >> n;
    cout << fakt(n) << endl;
    return 0;  
}  


// int fact(int n) {
//    if ((n==0)||(n==1))
//    return 1;
//    else
//    return n*fact(n-1);
// }
// int main() {
//    int n = 5;
//    cout<<"Factorial of "<<n<<" is "<<fact(n);
//    return 0;
// }
