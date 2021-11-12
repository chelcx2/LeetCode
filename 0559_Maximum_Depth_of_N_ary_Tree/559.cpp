#include <bits/stdc++.h>
using namespace std;
// Definition for a Node.
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

vector<int> depth;

int tr(Node *temp, int d)
{
    if (!temp->children.empty())
    {
        d++;
        // printf("val = %d, # of children = %d\n", temp->val, temp->children.size());
        for (int i = 0; i < temp->children.size(); i++)
        {
            tr(temp->children[i], d);
        }
    }
    else
    {
        // printf("%d\n", d);
        depth.push_back(d);
        return d;
    }
    return 0;
}

class Solution
{
public:
    int maxDepth(Node *root)
    {
        depth.clear();
        if (!root)
            return 0;
        tr(root, 1);
        // printf("a = %d\n", a);
        // for (int i = 0; i < depth.size(); i++)
        //     printf("%d ", depth[i]);
        return *max_element(depth.begin(), depth.end());
    }
};