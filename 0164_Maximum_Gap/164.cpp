#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int diff = 0;
        if (nums.size() < 2)
            return 0;
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] - nums[i - 1] > diff)
                diff = nums[i] - nums[i - 1];
        return diff;
    }
};

int main() {
    vector<int> v1 = {3, 6, 9, 1};
    Solution a;
    cout << a.maximumGap(v1);
    return 0;
}