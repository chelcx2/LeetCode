#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthFactor(int n, int k) {
        int idx = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if (++idx == k)
                    return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution a;
    cout << a.kthFactor(12, 3) << "\n";
    return 0;
}