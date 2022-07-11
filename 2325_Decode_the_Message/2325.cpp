#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        string mapping(26, ' ');
        string ans = message;
        vector<bool> used(26, false);

        int cnt = 0, idx = 0;
        char ch;
        while (cnt < 26) {
            ch = key[idx];
            if (ch == ' ') {
                idx++;
                continue;
            }
            if (!used[ch - 'a']) {
                used[ch - 'a'] = true;
                mapping[cnt] = ch;
                cnt++;
            }
            idx++;
        }
        
        cout << mapping << "\n";
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == ' ') {
                continue;
            }
            ans[i] = mapping.find(ans[i]) + 'a';
        }
        return ans;
    }
};

int main() {
    Solution a;
    cout << a.decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv") << "\n";
    cout << a.decodeMessage("eljuxhpwnyrdgtqkviszcfmabo", "zwx hnfx lqantp mnoeius ycgk vcnjrdb") << "\n";
    return 0;
}