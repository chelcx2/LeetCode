#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int tribonacci(int n)
    {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else if (n == 2)
            return 1;
        else
        {
            int F[38];
            F[0] = 0;
            F[1] = 1;
            F[2] = 1;
            for (int i = 3; i <= n; i++)
            {
                F[i] = F[i - 1] + F[i - 2] + F[i - 3];
            }
            return F[n];
        }
    }
};

int main()
{
    Solution a;
    cout << a.tribonacci(4) << " " << a.tribonacci(25);
    return 0;
}