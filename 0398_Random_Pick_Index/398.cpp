#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> num_arr;
    int rd;

    Solution(vector<int> &nums)
    {
        num_arr = nums;
    }

    int pick(int target)
    {

        int n = std::count(num_arr.begin(), num_arr.end(), target);
        if (n == 1)
        {
            for (int i = 0; i < num_arr.size(); i++)
            {
                if (num_arr[i] == target)
                    return i;
            }
        }
        else
        {
            vector<int> idx_arr;
            idx_arr.clear();
            for (int i = 0; i < num_arr.size(); i++)
            {
                if (num_arr[i] == target)
                    idx_arr.push_back(i);
            }
            for (int i = 0; i < idx_arr.size(); i++)
            {
                cout << idx_arr[i] << " ";
            }
            rd = rand() % idx_arr.size();
            return idx_arr[rd];
        }
        return 0;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */