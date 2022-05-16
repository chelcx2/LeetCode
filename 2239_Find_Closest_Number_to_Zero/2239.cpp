#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int smallest_dist = INT_MAX;
        int smallest_num;
        for (int i: nums) {
            int dist = i >= 0 ? i : -i;
            if (dist < smallest_dist) {
                smallest_dist = dist;
                smallest_num = i;
            }
            else if (dist == smallest_dist && i > 0) {
                smallest_num = i;
            }
        }
        return smallest_num;
    }
};

int main() {
    Solution a;
    vector<int> nums = {-4, -2, 1, 4, 8};
    cout << a.findClosestNumber(nums) << "\n";
    return 0;
}