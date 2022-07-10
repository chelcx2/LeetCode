#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string greatestLetter(string s) {
        set<char> upper;
        set<char> lower;
        for (char ch: s) {
            if (ch <= 'Z') 
                upper.insert(ch);
            else
                lower.insert(ch);
        }
        for (int i = 'Z'; i >= 'A'; i--) {
            auto pos1 = upper.find((char)i);
            auto pos2 = lower.find((char)(i + 32));
            if (pos1 != upper.end() && pos2 != lower.end()) {
                string ans(1, (char)i);
                return ans;
            }
        }
        return "";
    }
};

int main() {
    Solution a;
    cout << a.greatestLetter("lEeTcOdE") << "\n";
    return 0;
}