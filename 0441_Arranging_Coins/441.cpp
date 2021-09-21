#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long int row = 0, total = 0;
        while (total <= n)
        {
            total += (row + 1);
            row++;
        }
        return row - 1;
    }
};

int main()
{
    Solution a;
    cout << a.arrangeCoins(5) << " " << a.arrangeCoins(8) << "\n";
    return 0;
}