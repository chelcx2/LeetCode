#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        for (string word: words) {
            bool is_consistent = true;
            for (char ch: word) {
                if (allowed.find(ch) == -1) {
                    is_consistent = false;
                    break;
                }
            }
            if (is_consistent)
                ans++;
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<string> words = {"ad","bd","aaab","baa","badab"};
    cout << a.countConsistentStrings("ab", words) << "\n";
    return 0;
}
