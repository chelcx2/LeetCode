#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int tmp = nums.size();
        for (int i = 0; i < tmp; i++)
            nums.push_back(nums[i]);
        return nums;
    }
};

int main() {
    Solution a;
    vector<int> n = {1, 3, 2, 1};
    for (int i: a.getConcatenation(n)) 
        cout << i << " ";
    cout << "\n";
    return 0;
}