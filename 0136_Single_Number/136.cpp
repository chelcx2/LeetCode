#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp = nums[0];
        
        for (int i = 1; i < nums.size(); i += 2) {
            if (nums[i] != temp) {
                return temp;
            }
            temp = nums[i + 1];
        }
        return temp;
    }
};

int main() {
    vector<int> v = {4, 1, 2, 1, 2};
    Solution a;
    cout << a.singleNumber(v) << "\n";
    return 0;
}