#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        for (string prefix: words) {
            if (s.find(prefix) == 0)
                ans++;
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<string> words = {"a","b","c","ab","bc","abc"};
    cout << a.countPrefixes(words, "abc") << "\n";
    return 0;
}
