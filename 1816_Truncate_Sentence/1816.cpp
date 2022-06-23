#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int temp = 0;
        for (char ch: s) {
            if (ch == ' ') {
                if (temp == k - 1)
                    break;
                else
                    temp++;
            }
            ans += ch;
        }
        return ans;
    }
};

int main() {
    Solution a;
    cout << a.truncateSentence("Hello how are you Contestant", 4) << "\n";
}