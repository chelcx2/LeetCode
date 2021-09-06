#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<char> vowels;
        int idx;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowels.push_back(ch);
            }
        }
        idx = vowels.size() - 1;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                s[i] = vowels[idx];
                idx--;
            }
        }
        return s;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solution a;
    string s1 = "hello";
    string s2 = "leetcode";
    cout << a.reverseVowels(s1) << "\n"
         << a.reverseVowels(s2) << "\n";
    return 0;
}