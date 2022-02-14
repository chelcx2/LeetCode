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


class Solution {
private:
    vector<int> path;
public:
    int visit(TreeNode* t, int s) {
        int sum = s * 10 + t->val;
        if (t->left)
            visit(t->left, sum);
        if (t->right)
            visit(t->right, sum);
        if (!t->left && !t->right)
            path.push_back(sum);
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        visit(root, 0);
        int ans = 0;
        for (const int i: path)
            ans += i;
        return ans;
    }
};