#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        bool is_x_matrix = true;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (i == j || i + j == grid[i].size() - 1) {
                    if (grid[i][j] == 0)
                        is_x_matrix = false;
                }
                else {
                    if (grid[i][j] != 0)
                        is_x_matrix = false;
                }
            }
        }
        return is_x_matrix;
    }
};

int main() {
    Solution a;
    vector<vector<int>> grid = {{2, 0, 0, 1}, {0, 3, 1, 0}, {0, 5, 2, 0}, {4, 0, 0, 2}};
    cout << a.checkXMatrix(grid) << "\n";
    return 0;
}