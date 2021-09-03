#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode *head)
{
    vector<int> value;
    bool res = true;
    if (!head)
        return true;
    while (head->next)
    {
        value.push_back(head->val);
        head = head->next;
    }
    value.push_back(head->val);
    // for (int i = 0; i < value.size(); i++)
    // {
    //     cout << value[i] << " ";
    // }
    for (int i = 0; i < value.size() / 2; i++)
    {
        if (value[i] != value[value.size() - i - 1])
            res = false;
    }
    return res;
}

void addToTail(ListNode **head, int val)
{
    ListNode *node = new ListNode(val);
    if (!*head)
    {
        *head = node;
    }
    else
    {
        ListNode *tmp = *head;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = node;
    }
}

void printList(ListNode *head)
{
    ListNode *tmp;
    tmp = head;
    if (tmp == NULL)
        cout << "empty list";
    else
    {
        while (tmp != NULL)
        {
            cout << tmp->val << ',';
            tmp = tmp->next;
        }
        cout << endl;
    }
}

int main()
{
    // In order to test locally,
    // I add addToTail() and printList() to generate a linked list properly.
    // Also, I add main() to test my functions.
    // On LeetCode Website,
    // just copy isPalindrome() into class Solution() and it will be all accepted.

    ListNode *root = NULL;
    addToTail(&root, 1);
    addToTail(&root, 2);
    addToTail(&root, 2);
    addToTail(&root, 1);
    printList(root);
    cout << isPalindrome(root);
    return 0;
}