#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for (int cnt = nums.size() - 1; cnt >= 1; cnt--) {
            for (int i = 0; i < cnt; i++) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            }
        }
        return nums[0];
    }
};

int main() {
    Solution a;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << a.triangularSum(nums) << "\n";
    return 0;
}