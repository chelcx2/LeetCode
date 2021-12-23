#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        for (const auto ch: order) {
            int cnt = count(s.begin(), s.end(), ch);
            for (int i = 0; i < cnt; i++)
                ans += ch;
            s.erase(remove(s.begin(), s.end(), ch), s.end());
        }
        return ans + s;
    }
};

int main() {
    string ord1 = "cba", s1 = "abcd";
    string ord2 = "cbafg", s2 = "abcd";
    Solution a;
    cout << a.customSortString(ord1, s1) << "\n" << a.customSortString(ord2, s2);
    return 0;
}