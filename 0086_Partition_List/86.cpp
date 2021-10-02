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

void addToTail(ListNode **, int);
void printList(ListNode *);

class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *less = nullptr, *greater_or_equal = nullptr;

        while (head)
        {
            if (head->val < x)
                addToTail(&less, head->val);
            else
                addToTail(&greater_or_equal, head->val);
            head = head->next;
        }
        // printList(less);
        // printList(greater_or_equal);
        ListNode *pos = less;
        if (!less && !greater_or_equal)
            return nullptr;
        if (!less)
            return greater_or_equal;
        if (!greater_or_equal)
            return less;
        while (pos)
        {
            if (pos->next)
                pos = pos->next;
            else
                break;
        }
        pos->next = greater_or_equal;

        return less;
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
    int L[6] = {1, 4, 3, 2, 5, 2};
    ListNode *t1 = nullptr, *t2 = nullptr;
    Solution a;
    for (int i = 0; i < 6; i++)
        addToTail(&t1, L[i]);
    addToTail(&t2, 1);
    // printList(a.partition(t1, 3));
    printList(a.partition(t2, 0));
    return 0;
}