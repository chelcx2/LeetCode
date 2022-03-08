#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {       
        int ans = 0, idx;
        if (ruleKey == "type")
            idx = 0;
        else if (ruleKey == "color")
            idx = 1;
        else
            idx = 2;
        for (const auto item: items) {
            if (item[idx] == ruleValue)
                ans++;
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<vector<string>> v = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
    string ruleKey = "color", ruleValue = "silver";
    cout << a.countMatches(v, ruleKey, ruleValue) << "\n";
    return 0;
}