#include <bits/stdc++.h>
using namespace std;
int gcd(int, int);

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        set<string> ans;
        for (int den = 2; den <= n; ++den) {
            for (int num = 1; num < den; ++num) {
                int temp = gcd(num, den);
                ans.insert(to_string(num / temp) + "/" + to_string(den / temp));
            }
        }
        vector<string> ans2(ans.begin(), ans.end());
        return ans2;
    }
};

int gcd(int num1, int num2) {
    while (num1 != 0 && num2 != 0) {
        if (num1 > num2)
            num1 %= num2;
        
        else
            num2 %= num1;
        
    }
    return num1 == 0 ? num2 : num1;
}

int main() {
    Solution a;
    for (const string s: a.simplifiedFractions(4))
        cout << s << " ";
    cout << "\n";
    cout << gcd(1, 2) << "\n";
    return 0;
}