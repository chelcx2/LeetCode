#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int num = words.size();
        vector<vector<int>> appear(num, vector<int>(26, 0));
        vector<string> ans;
        for (int i = 0; i < num; i++) {
            for (const char ch: words[i]) {
                appear[i][ch - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            bool flag = true;
            int min_appear = 101;
            for (int j = 0; j < num; j++) {
                if (!appear[j][i]) {
                    flag = false;
                    break;
                }
                if (appear[j][i] < min_appear)
                    min_appear = appear[j][i];
            }
            if (!flag)
                continue;
            string tmp(1, i + 'a');
            for (int _ = 0; _ < min_appear; ++_) {
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<string> words = {"bella", "label", "roller"};
    for (const string s: a.commonChars(words))
        cout << s << " ";
    cout << "\n";
    return 0;
}