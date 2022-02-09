#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> sum;

int visit(TreeNode* t, int prev_sum) {
    if (!t->left && !t->right) {
        sum.push_back(t->val + prev_sum);
        return t->val + prev_sum;
    }
    if (t->left) {
        visit(t->left, t->val + prev_sum);
    }
    if (t->right) {
        visit(t->right, t->val + prev_sum);
    }
    return t->val + prev_sum;
}

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        sum.clear();
        if (!root)
            return false;
        visit(root, 0);
        for (const auto i: sum) {
            // printf("%d ", i);
            if (i == targetSum)
                return true;
        }
        return false;
    }
};

int main() {
    return 0;
}