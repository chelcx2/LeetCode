#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int divide(long long int dividend, long long int divisor)
    {
        long long int ans = (long long int)(dividend / divisor);
        // cout << ans;
        if (ans > pow(2, 31) - 1 || ans < pow(-2, 31))
        {

            return pow(2, 31) - 1;
        }
        if (dividend % divisor == 0)
        {

            return ans;
        }
        else
        {
            return ans;
        }
    }
};

int main()
{
    Solution a;
    cout << a.divide(10, 3) << "\n"
         << a.divide(7, -3) << "\n"
         << a.divide(0, 1) << "\n"
         << a.divide(1, 1) << "\n";
    return 0;
}