#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 255;

vector<int> primes;

void initialize() {
    bool numbers[MAX] = {};
    for (int i=2; i*i <= MAX; i++) {
        if (!numbers[i]) {
            for (int j=i*i; j<=MAX; j+= i) {
                numbers[j] = true;
            }
        }
    }
    for (int i=2; i<=MAX; i++) {
        if (!numbers[i]) {
            primes.push_back(i);
        }
    }
}

bool findNums(int num) {
    bool ans = false;
    int first = -1, second = -1, third = -1;
    for (int i=0; i < primes.size(); i++) {
        first = primes[i];

        for (int j=i; j<primes.size(); j++) {
            second = primes[j];

            third = num - first - second;

            if (binary_search(primes.begin(), primes.end(), third)) {
                ans = true;
                break;
            }
        }
        if (ans) {
            break;
        }
    }

    if (ans) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    initialize();
    // for (int i: primes) {
    //     cout << i << endl;
    // }

    int h, w, x;
    cin >> h >> w;

    while (h--) {
        for (int i=0; i<w; i++) {
            cin >> x;
            if (findNums(x)) cout << "POSSIBLE\n";
            else cout << "IMPOSSIBLE\n";
        }
    }

    return 0;
}