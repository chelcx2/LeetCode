#include <bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

map<int, int> cnt;

void preorder(TreeNode* root) {
    map<int, int>::iterator it(cnt.find(root->val));
    if (it != cnt.end())
        it->second++;
    else
        cnt[root->val] = 1;
    
    if (root->left) 
        preorder(root->left);
    if (root->right)
        preorder(root->right);
}

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    return a.second > b.second;
}

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        cnt.clear();
        preorder(root);
        vector<pair<int, int>> A;
        vector<int> ans;
        for (const auto t: cnt)
            A.push_back(t);
        sort(A.begin(), A.end(), cmp);
        ans.push_back(A[0].first);
        int t = A[0].second;
        for (int i = 1; i < A.size(); i++) {
            if (A[i].second == t)
                ans.push_back(A[i].first);
            else
                return ans;
        }
        return ans;
    }
};