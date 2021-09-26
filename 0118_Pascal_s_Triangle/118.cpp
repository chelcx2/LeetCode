#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans = {{1}};
        for (int row = 2; row <= numRows; row++)
        {
            // printf("row = %d\n", row);
            vector<int> temp;
            for (int col = 0; col < row; col++)
            {
                if (col == 0 || col == row - 1)
                    temp.push_back(1);
                else
                    temp.push_back(ans[row - 2][col - 1] + ans[row - 2][col]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int main()
{
    Solution a;
    vector<vector<int>> result = a.generate(5);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
            cout << result[i][j] << " ";
        cout << "\n";
    }
    return 0;
}