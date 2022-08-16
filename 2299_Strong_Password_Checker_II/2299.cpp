#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int lower = 0, upper = 0, digit = 0, special = 0;
        string special_ch = "!@#$%^&*()-+";
        if (password.length() < 8)
            return false;
        for (int i = 0; i < password.length(); i++) {
            if ('a' <= password[i] && 'z' >= password[i])
                lower++;
            else if ('A' <= password[i] && 'Z' >= password[i])
                upper++;
            else if ('0' <= password[i] && '9' >= password[i])
                digit++;
            else if (special_ch.find(password[i]) != -1)
                special++;
            
            if (i > 0 && password[i] == password[i - 1])
                return false;
        }
        return lower && upper && digit && special ? true : false;
    }
};

int main() {
    Solution a;
    cout << a.strongPasswordCheckerII("IloveLe3tcode!") << "\n";
    cout << a.strongPasswordCheckerII("Me+You--IsMyDream") << "\n";
    cout << a.strongPasswordCheckerII("1aB!") << "\n";
    return 0;
}