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
    set<int> element;
public:
    void visit(TreeNode* t) {
        element.insert(t->val);
        if (t->left)
            visit(t->left);
        if (t->right)
            visit(t->right);
    }
    bool isUnivalTree(TreeNode* root) {
        visit(root);
        return element.size() == 1;
    }
};

