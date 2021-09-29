#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        // printf("%d\n", (int)sqrt(10));
        for (int i = (int)sqrt(area); i > 0; i--)
        {
            if (area % i == 0)
                return {(int)area / i, i};
        }
        return {area, 1};
    }
};

int main()
{
    Solution a;
    cout << a.constructRectangle(4)[0] << " " << a.constructRectangle(4)[1] << "\n";
    cout << a.constructRectangle(37)[0] << " " << a.constructRectangle(37)[1] << "\n";
    cout << a.constructRectangle(122122)[0] << " " << a.constructRectangle(122122)[1] << "\n";
    return 0;
}