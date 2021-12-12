#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> myset;
        for (const auto ch: sentence)
            myset.insert(ch);
        return myset.size() == 26;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string sen1 = "thequickbrownfoxjumpsoverthelazydog", sen2 = "leetcode";
    Solution a;
    cout << a.checkIfPangram(sen1) << "\n" << a.checkIfPangram(sen2);
    return 0;
}