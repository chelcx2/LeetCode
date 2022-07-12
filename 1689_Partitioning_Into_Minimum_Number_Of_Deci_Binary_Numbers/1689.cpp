#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int max = 0;
        for (char ch: n) {
            if (ch - '0' > max)
                max = ch - '0';
        }
        return max;
    }
};

int main() {
    Solution a;
    cout << a.minPartitions("82734") << "\n";
    return 0;
}