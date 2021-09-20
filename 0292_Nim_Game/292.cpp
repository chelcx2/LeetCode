#include <iostream>
using namespace std;
class Solution
{
public:
    bool canWinNim(int n)
    {
        return n % 4 != 0;
    }
};
int main()
{
    Solution a;
    cout << a.canWinNim(4) << " " << a.canWinNim(1) << " " << a.canWinNim(2) << " ";
    return 0;
}