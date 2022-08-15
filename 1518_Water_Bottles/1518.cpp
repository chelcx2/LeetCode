#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while (numBottles >= numExchange) {
            // printf("numBottles = %d\n", numBottles);
            ans += numBottles / numExchange;
            numBottles = numBottles / numExchange + numBottles % numExchange;
        }
        return ans;
    }
};

int main() {
    Solution a;
    cout << a.numWaterBottles(9, 3) << "\n";
    cout << a.numWaterBottles(15, 4) << "\n";
    return 0;
}