#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void addToTail(ListNode **, int);
void printList(ListNode *);

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *ans = nullptr;
        int prev = 1000;

        while (head)
        {
            if (head->val != prev)
            {
                // find an element that is deifferent from prev
                // cout << "fuck\n";
                addToTail(&ans, head->val);
                prev = head->val;
            }
            head = head->next;
        }
        return ans;
    }
};

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
            cout << tmp->val;
            tmp = tmp->next;
            if (tmp)
                cout << ", ";
        }
        cout << endl;
    }
}

int main()
{
    ListNode *L1 = NULL;
    ListNode *L2 = NULL;
    int temp[5] = {1, 1, 2, 3, 3};
    Solution a;
    addToTail(&L1, 1);
    addToTail(&L1, 1);
    addToTail(&L1, 2);
    for (int i = 0; i < 5; i++)
        addToTail(&L2, temp[i]);
    // printList(L1);
    // printList(L2);
    printList(a.deleteDuplicates(L2));
    return 0;
}