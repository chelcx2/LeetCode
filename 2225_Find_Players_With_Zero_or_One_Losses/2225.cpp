#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> lose;
        vector<int> never_lose, lose_one;
        for (auto match: matches) {
            lose[match[1]]++;
            if (!lose.count(match[0]))
                lose[match[0]] = 0;
        }
        for (const auto &s: lose) {
            if (s.second == 0)
                never_lose.push_back(s.first);
            
            if (s.second == 1)
                lose_one.push_back(s.first);
        }
        vector<vector<int>> ans = {never_lose, lose_one};
        return ans;
    }
};

int main() {
    Solution a;
    vector<vector<int>> matches = {{1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};
    for (const auto v: a.findWinners(matches)) {
        for (const int i: v) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
