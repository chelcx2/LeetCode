#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        for (int sum = 0; sum <= mat.size() - 1 + mat[0].size() - 1; sum++) {
            for (int offset = 0; offset <= sum; offset++) {
                if (sum % 2 == 0 && sum - offset < mat.size() && offset < mat[0].size())
                    ans.push_back(mat[sum - offset][offset]);
                else if (sum % 2 != 0 && offset < mat.size() && sum - offset < mat[0].size())
                    ans.push_back(mat[offset][sum - offset]);
            }
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> m1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution a;
    for (const auto i: a.findDiagonalOrder(m1))
        cout << i << " ";
    return 0;
}