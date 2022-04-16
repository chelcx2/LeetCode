#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int i: nums) {
            int digit = 0;
            while (i > 0) {
                i /= 10;
                digit++;
            }
            if (digit % 2 == 0)
                ans++;
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<int> v = {12,345,2,6,7896};
    cout << a.findNumbers(v) << "\n";
    return 0;
}