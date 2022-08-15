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

class FindElements {
private:
    set<int> element;
public:
    void recover(TreeNode* root) {
        element.insert(root->val);
        
        if (root->left) {
            root->left->val = root->val * 2 + 1;
            recover(root->left);
        }
        if (root->right) {
            root->right->val = root->val * 2 + 2;
            recover(root->right);
        }
        
    }
    
    FindElements(TreeNode* root) {
        element.clear();
        root->val = 0;
        recover(root);
    }
    
    bool find(int target) {
        for (const auto s: element) {
            if (s == target)
                return true;
        }
        return false;

    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */

