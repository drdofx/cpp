// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=0, right=n, mid, first;
        while (left<=right) {
            mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                first = mid;
                right = mid - 1;
            } else if (!isBadVersion(mid)) {
                left = mid + 1;
            }
        }
        return first;
    }
};
