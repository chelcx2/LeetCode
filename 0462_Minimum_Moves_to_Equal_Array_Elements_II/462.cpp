#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int med = nums[nums.size() / 2], moves = 0;
        for (const int i: nums) {
            moves += abs(i - med);
        }
        return moves;
    }
};

int main() {
    vector<int> v = {1, 10, 2, 9};
    Solution a;
    cout << a.minMoves2(v) << "\n";
    return 0;
}