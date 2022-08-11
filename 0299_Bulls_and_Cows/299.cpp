#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int len = secret.length();
        vector<int> appearance(10, 0);
        int bulls = 0, cows = 0;
        for (const char num: secret) {
            appearance[num - '0']++;
        }
        for (int i = 0; i < len; i++) {
            if (guess[i] == secret[i]) {
                bulls++;
                appearance[guess[i] - '0']--;
            }
            // else {
            //     for (int j = 0; j < len; j++) {
            //         if (i != j && guess[i] == secret[j] && appearance[guess[i] - '0'] > 0) {
            //             cows++;
            //             appearance[guess[i] - '0']--;
            //             break;
            //         }
            //     }
            // }
            // cout << "after i = " << i << ": ";
            // for (int t: appearance) {
            //     cout << t << " ";
            // }
            // cout << "\n";
        }
        
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (guess[i] != secret[i] && i != j && guess[i] == secret[j] && appearance[guess[i] - '0'] > 0) {
                    cows++;
                    appearance[guess[i] - '0']--;
                    break;
                }
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};

int main() {
    Solution a;
    cout << a.getHint("1123", "0111") << "\n";
    cout << a.getHint("1807", "7810") << "\n";
    cout << a.getHint("1122", "1222") << "\n";
    return 0;
}