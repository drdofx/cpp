#include <iostream>
#include <vector>

using namespace std;

vector<int> v = {1, 2, 3, 9};
int sum = 8;
bool hasPairWithSum(const vector<int>& data, int sum) {
    int low=0, hi=data.size()-1;
    while(low<hi) {
        int s = data[low] + data[hi];
        if (s==sum) return true;
    }
    return false;
}

int main() {
    bool ans = hasPairWithSum(v, sum);
    cout << ans << endl;
}