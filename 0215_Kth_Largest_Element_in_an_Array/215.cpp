#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k - 1];
    }
};

int main() {
    Solution a;
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    cout << a.findKthLargest(nums, 2) << "\n";
    return 0;
}