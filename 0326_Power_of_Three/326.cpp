#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        while (n > 1) {
            if (n % 3 == 0)
                n /= 3;
            else
                return false;
        }
        return n == 1;
    }
};

int main() {
    Solution a;
    cout << a.isPowerOfThree(27) << " " << a.isPowerOfThree(0) << "\n";
    return 0;
}
