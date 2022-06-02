#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> rs;
        for(int i: nums) {
            sum += i;
            rs.push_back(sum);
        }
        return rs;
    }
};

int main() {
    Solution a;
    vector<int> nums = {1, 2, 3, 4};
    for (int i: a.runningSum(nums)) 
        cout << i << " ";
    return 0;
}