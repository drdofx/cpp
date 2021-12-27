#include <iostream>

using namespace std;

// the number of subarrays is n^2
// time complexity: o(n^3)

void printSubarrays(int arr[], int n) {
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            for (int k=i; k<=j; k++) {
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
    }
}

// find the largest subarray sum

// Solution 1 Brute Force (o(n^3))
int largestSumSubarrays(int arr[], int n) {
    int sum, largest=0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            sum = 0;
            for (int k=i; k<=j; k++) {
                sum += arr[k];
            }
            if (sum > largest) largest = sum;
            // cout << "the sub that start from element " << arr[i] << " = " << sum << endl;
        }
    }
    // cout << "the largest sum of sub is = "  << largest << endl;
    return largest;
}

// Solution 2 Prefix sums (o(n^2))
int largestSumSubarrays1(int arr[], int n) {
    int prefix[n];
    prefix[0] = arr[0];
    for (int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int sum, largest=0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            sum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j];
            if (sum > largest) largest = sum;
            // cout << "the sub that start from element " << arr[i] << " = " << sum << endl;
        }
    }
    // cout << "the largest sum of sub is = "  << largest << endl;
    return largest;
}

// Solution 3 - the best solution -> Kadane's algorithm (o(n) time and o(1) space)
int kadanes(int arr[], int n) {
    int current_sum = 0, largest = 0;

    for (int i=0; i<n; i++) {
        current_sum = current_sum + arr[i];
        if (current_sum < 0) {
            current_sum = 0;
        }
        largest = max(largest, current_sum);
    }
    return largest;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    // printSubarrays(arr, n);

    cout << largestSumSubarrays(arr, n) << endl;
    cout << largestSumSubarrays1(arr, n) << endl;

    cout << kadanes(arr, n) << endl;

    return 0;
}