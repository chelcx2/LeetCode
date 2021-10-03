#include <bits/stdc++.h>
using namespace std;
// only test on leetcode website
// so it's empty in main()

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> inorder;

    vector<int> inorderTraversal(TreeNode *root)
    {
        if (root)
        {
            inorderTraversal(root->left);
            inorder.push_back(root->val);
            inorderTraversal(root->right);
        }
        return inorder;
    }
};

int main()
{
    return 0;
}