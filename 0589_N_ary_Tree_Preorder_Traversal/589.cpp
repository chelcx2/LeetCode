#include <bits/stdc++.h>

// Definition for a Node.
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{

public:
    vector<int> result;
    vector<int> preorder(Node *root)
    {
        if (root)
        {
            result.push_back(root->val);
            vector<Node *> children = root->children;
            for (int i = 0; i < children.size(); i++)
            {
                // cout << children[i]->val << " ";
                preorder(children[i]);
            }
        }
        return result;
    }
};