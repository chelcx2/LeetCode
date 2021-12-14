#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rotatedDigits(int n) {
        map<char, string> rotate = {
            {'0', "0"}, {'1', "1"}, {'2', "5"}, {'3', "-"}, {'4', "-"}, 
            {'5', "2"}, {'6', "9"}, {'7', "-"}, {'8', "8"}, {'9', "6"}
        };
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            string s = to_string(i), new_string = "";
            map<char, string>::iterator iter;
            bool valid = true;
            for (const auto ch: s) {
                iter = rotate.find(ch);
                new_string += iter->second;
                if (iter->second == "-") {
                    valid = false;
                    break;
                }
            }
            if (new_string != s && valid)
                ans++;
        }
        return ans;
    }
};

int main() {
    Solution a;
    cout << a.rotatedDigits(10);
    return 0;
}