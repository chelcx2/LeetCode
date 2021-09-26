#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> prev = {1};
        for (int row = 2; row <= rowIndex + 1; row++)
        {
            vector<int> temp;
            for (int col = 0; col < row; col++)
            {
                if (col == 0 || col == row - 1)
                    temp.push_back(1);
                else
                    temp.push_back(prev[col - 1] + prev[col]);
            }
            prev = temp;
        }
        return prev;
    }
};

int main()
{
    Solution a;
    vector<int> result = a.getRow(5);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
    return 0;
}