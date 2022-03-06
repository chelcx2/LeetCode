#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> n(nums.begin(), nums.end());
        while (n.count(original)) {
            original *= 2;
        }
        return original;
    }
};

int main() {
    vector<int> nums = {5, 3, 6, 1, 12};
    int original = 3;
    Solution a;
    cout << a.findFinalValue(nums, original) << "\n";
    return 0;
}