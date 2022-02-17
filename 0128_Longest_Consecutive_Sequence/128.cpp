#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (!nums.size())
            return 0;
        sort(nums.begin(), nums.end());
        int maxlen = 0, prev = nums[0] - 1, len = 0;
        for (int i = 0; i < nums.size(); i++) {
            // cout << nums[i] << " " << prev << " " << len << "\n";
            if (nums[i] == prev)
                continue;
            if (nums[i] == prev + 1) {
                len++;
                if (len > maxlen)
                    maxlen = len;
            }
            else {
                len = 1;
            }
            prev = nums[i];
        }
        return maxlen;
    }
};

int main() {
    vector<int> v = {0,3,7,2,5,8,4,6,0,1};
    Solution a;
    cout << a.longestConsecutive(v);
    return 0;
}