#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size() - 1; i++) {
            if (i > 0 && numbers[i] == numbers[i - 1])
                continue;
            for (int j = i + 1; j < numbers.size(); j++) {
                if (j > i + 1 && numbers[j] == numbers[j - 1])
                    continue;
                else if (numbers[i] + numbers[j] == target) {
                    return {i + 1, j + 1};
                }
            }
        }
        return {};
    }
};

int main() {
    vector<int> n1 = {2, 7, 11, 15}, n2 = {-1, 0};
    int t1 = 9, t2 = -1;
    Solution a;
    cout << a.twoSum(n1, t1)[0] << " " << a.twoSum(n1, t1)[1] << "\n";
    cout << a.twoSum(n2, t2)[0] << " " << a.twoSum(n2, t2)[1] << "\n";
    return 0;
}