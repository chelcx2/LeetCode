#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxPower(string s) {
        vector<int> pwr;
        char prev = '\0';
        int temp = 1;
        for (int i = 0; i < s.length(); i++) {
            // printf("char now = %c, prev = %c\n", s[i], prev);
            if (s[i] == prev) 
                pwr.push_back(++temp);
            else {
                pwr.push_back(1);
                prev = s[i];
                temp = 1;
            }
        }
        // for (int i: pwr)
        //     cout << i << " ";
        // cout << "\n";
        return *max_element(pwr.begin(), pwr.end());
    }
};

int main() {
    Solution a;
    cout << a.maxPower("abbcccddddeeeeedcba") << "\n";
    return 0;
}