#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "";
        int idx;
        vector<int>::iterator it;
        for (int i = 0; i < s.length(); i++) {
            it = find(indices.begin(), indices.end(), i);
            idx = distance(indices.begin(), it);
            ans += s[idx];
        }
        return ans;
    }
};

int main() {
    string s1 = "codeleet";
    vector<int> ind1 = {4, 5, 6, 7, 0, 2, 1, 3};
    Solution a;
    cout << a.restoreString(s1, ind1);
    return 0;
}