#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> ans = {1, 1};
        for (int idx = 2; idx <= n; idx++) {
            int temp = 0, idx_sum = idx - 1;
            // printf("idx = %d\n", idx);
            for (int i = 0; i <= idx_sum / 2; i++) {
                if (i == idx_sum - i) {
                    // printf("i == %d\n", i);
                    temp += ans[i] * ans[i];
                }
                else {
                    temp += 2 * ans[i] * ans[idx_sum - i];
                }
            }
            ans.push_back(temp);
            // printf("after idx = %d: ", idx);
            // for (int i: ans)
            //     printf("%d ", i);
            // printf("\n");
        }
        return ans[n];
    }
};

int main() {
    Solution a;
    cout << a.numTrees(6) << "\n";
    return 0;
}