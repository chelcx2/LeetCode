#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int sum = 0, carry = 0;
        string ans = "";
        int maxlen = num1.size() > num2.size() ? num1.size() : num2.size();
        for (int i = 0; i < maxlen; i++) {
            int n1, n2;
            if (i >= num1.size()){
                n1 = 0;
                n2 = num2[i] - '0';
            }
            else if (i >= num2.size()) {
                n1 = num1[i] - '0';
                n2 = 0;
            }
            else {
                n1 = num1[i] - '0';
                n2 = num2[i] - '0';
            }
            sum = n1 + n2 + carry;
            carry = sum >= 10 ? 1 : 0;
            // printf("n1 n2 = %d %d, sum = %d, carry = %d, %c\n", n1, n2, sum, carry, sum + '0');
            ans += sum >= 10 ? sum - 10 + '0' : sum + '0';
        }
        if (carry > 0) {
            ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    string n1 = "11", n2 = "123";
    string n3 = "456", n4 = "77";
    Solution a;
    cout << a.addStrings(n1, n2) << "\n";
    cout << a.addStrings(n3, n4) << "\n";
    return 0;
}