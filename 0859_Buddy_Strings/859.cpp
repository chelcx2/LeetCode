#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length() || s.length() < 2 || goal.length() < 2)
            return false;
        int diff = 0;
        bool same = true, doub = false;
        char prev = s[0];
        char s_diff0 = ' ', s_diff1 = ' ', goal_diff0 = ' ', goal_diff1 = ' ';
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i]) {
                diff++;
                if (diff == 1) {
                    s_diff0 = s[i];
                    goal_diff0 = goal[i];
                }
                else if (diff == 2) {
                    s_diff1 = s[i];
                    goal_diff1 = goal[i];
                }
            }
        }
        // printf("diff = %d, s0 = %c, s1 = %c, g0 = %c, g1 = %c\n", diff, s_diff0, s_diff1, goal_diff0, goal_diff1);
        if (diff == 2 && s_diff0 == goal_diff1 && goal_diff0 == s_diff1) {
            return true;
        }

        for (int i = 1; i < s.length(); i++) {
            // printf("count %c = %d\n", s[i], count(s.begin(), s.end(), s[i]));
            if (count(s.begin(), s.end(), s[i]) > 1) {
                doub = true;
            }
            if (s[i] != prev) {
                same = false;
            }
        }
        // printf("same = %d\n", same);
        if (same && s == goal) {
            return true;
        }
        if (s == goal && doub) {
            return true;
        }

        return false;
        
    }
};

int main() {
    string s1 = "ab", goal1 = "ba";
    string s2 = "ab", goal2 = "ab";
    string s3 = "aa", goal3 = "aa";
    string s4 = "aaaaaaabc", goal4 = "aaaaaaacb";
    string s5 = "abab", goal5 = "abab";
    Solution a;
    // cout << a.buddyStrings(s1, goal1) << " " << a.buddyStrings(s2, goal2) << " " << a.buddyStrings(s3, goal3) << " " << a.buddyStrings(s4, goal4);
    cout << a.buddyStrings(s5, goal5);
    return 0;
}