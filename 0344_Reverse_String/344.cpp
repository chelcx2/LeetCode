#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Solution a;
    vector<char> t1 = {'h', 'e', 'l', 'l', 'o'};
    vector<char> t2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    a.reverseString(t1);
    a.reverseString(t2);
    return 0;
}