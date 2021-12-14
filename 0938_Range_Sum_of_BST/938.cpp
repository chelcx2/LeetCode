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


int ans;
void visit(TreeNode* root, int low, int high) {
    if (root->val >= low && root->val <= high) {
        ans += root->val;
    }
    if (root->left)
        visit(root->left, low, high);
    if (root->right)
        visit(root->right, low, high);
}

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        ans = 0;
        visit(root, low, high);
        return ans;
    }
};


int main() {
    return 0;
}