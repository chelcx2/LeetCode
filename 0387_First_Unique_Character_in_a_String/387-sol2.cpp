#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> times(26, 0);
        for (char ch: s) {
            times[ch - 'a']++;
        }
        for (int idx = 0; idx < s.length(); idx++) {
            if (times[s[idx] - 'a'] == 1)
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