#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        reverse(columnTitle.begin(), columnTitle.end());
        int ans = 0;
        int pwr = 0;
        // for (int i = 0; i < columnTitle.size(); i++)
        // {
        //     cout << columnTitle[i] << " ";
        // }
        for (int i = 0; i < columnTitle.size(); i++)
        {
            auto base = pow(26, pwr);
            // cout << pow(26, 1) << "\n\n";
            // cout << columnTitle[i] << " " << (int)columnTitle[i] << " " << (int)'A' << " " << (int)(columnTitle[i] - 'A' + 1) << " ";
            // cout << base << " ";
            // cout << (int)(columnTitle[i] - 'A' + 1) * base << "\n";
            ans += (int)(columnTitle[i] - 'A' + 1) * base;
            pwr++;
        }
        return ans;
    }
};

int main()
{
    Solution a;
    cout << a.titleToNumber("FXSHRXW");
    return 0;
}