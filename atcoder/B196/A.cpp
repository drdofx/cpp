#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, result;
    cin >> a >> b;
    cin >> c >> d;
    result = max((b-c), (b-d));

    cout << result << endl;   
    
    return 0;
}