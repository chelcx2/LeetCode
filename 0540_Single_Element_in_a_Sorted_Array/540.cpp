#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            if (i == nums.size() - 1) {
                return nums[i];
            }
            else if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
            i += 2;
        }
        return nums[i];
    }
};

int main() {
    Solution a;
    vector<int> num1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    vector<int> num2 = {3, 3, 7, 7, 10, 11, 11};
    cout << a.singleNonDuplicate(num1) << " " << a.singleNonDuplicate(num2);
    return 0;
}