#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    Solution a;
    vector<int> v = {5, 2, 3, 1};
    for (int i: a.sortArray(v)) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}