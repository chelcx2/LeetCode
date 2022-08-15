#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        map<int, int> times;
        for (const int &i: nums) {
            times[i]++;
        }
        for (const auto p: times) {
            if (p.second > 1) {
                ans += (p.second * (p.second - 1)) / 2;
            }
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<int> nums = {1, 1, 1, 1};
    // vector<int> nums = {1, 2, 3, 1, 1, 3};
    cout << a.numIdenticalPairs(nums) << "\n";
    return 0;
}