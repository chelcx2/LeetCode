#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        set<int> digit;
        for (const char ch: s) {
            if (ch >= '0' && ch <= '9')
                digit.insert(ch - '0');
        }
        vector<int> temp(digit.begin(), digit.end());
        sort(temp.begin(), temp.end(), greater <>());

        return temp.size() > 1 ? temp[1] : -1;
    }
};

int main() {
    Solution a;
    string s = "dfa12321afd";
    cout << a.secondHighest(s) << "\n";
    return 0;
}