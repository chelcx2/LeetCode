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
    vector<int> depth;

public:
    int visit(TreeNode* t, int prev) {
        if (!t->left && !t->right)
            depth.push_back(prev + 1);
        if (t->left)
            visit(t->left, prev + 1);
        if (t->right)
            visit(t->right, prev + 1);
        return prev + 1;
    }
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;
        depth.clear();
        visit(root, 0);
        // for (const int i: depth)
        //     printf("%d ", i);
        return *max_element(depth.begin(), depth.end());
    }
};

int main() {
    return 0;
}