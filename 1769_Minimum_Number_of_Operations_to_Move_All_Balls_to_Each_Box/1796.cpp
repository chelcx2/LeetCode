#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.length(), 0);
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans.size(); j++) {
                if (i == j || boxes[j] == '0')
                    continue;
                ans[i] += i - j > 0 ? i - j : j - i;
            }
        }
        return ans;
    }
};

int main() {
    Solution a;
    for (const int i: a.minOperations("001011")) 
        cout << i << " ";
    cout << "\n";
    return 0;    
}