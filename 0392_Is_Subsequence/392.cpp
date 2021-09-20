#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        string temp = t;
        for (int i = 0; i < s.size(); i++)
        {
            int idx = temp.find(s[i]);
            if (idx == -1)
                return false;
            temp = temp.substr(idx + 1, temp.size() - idx - 1);
        }
        return true;
    }
};

int main()
{
    Solution a;
    cout << a.isSubsequence("abc", "ahbgdc") << " " << a.isSubsequence("axc", "ahbgdc");
    // string s1 = "hello world", s2 = "lox";
    // int pos = s1.find(s2);
    // cout << pos << "\n";
    return 0;
}