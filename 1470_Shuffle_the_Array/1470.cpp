#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[n + i]);
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    for (int i: a.shuffle(nums, 3)) 
        cout << i << " ";
    cout << "\n";
    return 0;
}
