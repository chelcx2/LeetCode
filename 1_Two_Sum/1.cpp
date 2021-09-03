#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j && nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums{3, 2, 4};
    // for (int i = 0; i < nums.size(); i++)
    //     cout << nums[i] << " ";

    vector<int> ans = twoSum(nums, 6);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}