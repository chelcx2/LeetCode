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
    vector<int> v;    
public:
    void tr(TreeNode* root) {
        v.push_back(root->val);
        if (root->left)
            tr(root->left);
        if (root->right)
            tr(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        tr(root);
        sort(v.begin(), v.end());
        return v[k - 1];
    }
};