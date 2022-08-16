#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> appearance;
        for (char ch: s) {
            appearance[ch]++;
        }
        for (int idx = 0; idx < s.length(); idx++) {
            if (appearance[s[idx]] == 1)
                return idx;
        }
        return -1;
    }
};

int main() {
    Solution a;
    cout << a.firstUniqChar("loveleetcode") << "\n";
    return 0;
}