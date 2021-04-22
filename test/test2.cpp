#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[32];
    int firstEncounter=0;
    for (int i=32; i>=0; i--) {
        if ((n - pow(2,i)) >= 0) {
            if (firstEncounter == 0) firstEncounter = i;
            arr[i] = 1;
            n-=pow(2,i);
        } else {
            arr[i] = 0;
        }
    }

    for (int i=firstEncounter; i>=0; i--) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}