#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countAsterisks(string s) {
        bool between =  false;
        int ans = 0;
        for (const char ch: s) {
            if (ch == '*' && !between)
                ans++;
            else if (ch == '|')
                between = !between;
            // cout << ans << " ";
        }
        // cout << "\n";
        return ans;
    }
};

int main() {
    Solution a;
    cout << a.countAsterisks("l|*e*et|c**o|*de|") << "\n";
    return 0;
}