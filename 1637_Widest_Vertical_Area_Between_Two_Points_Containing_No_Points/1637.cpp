#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int> myset;
        int prev, ans = 0;
        for (const auto pair: points)
            myset.insert(pair[0]);
        prev = *myset.begin();
        for (const auto &x: myset) {
            if (x - prev > ans) {
                ans = x - prev;
            }
            prev = x;
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<vector<int>> t1 = {{8, 7}, {9, 9}, {7, 4}, {9, 7}};
    vector<vector<int>> t2 = {{3, 1}, {9, 0}, {1, 0}, {1, 4}, {5, 3}, {8, 8}};
    cout << a.maxWidthOfVerticalArea(t1) << "\n" << a.maxWidthOfVerticalArea(t2);
    return 0;
}