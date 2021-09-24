#include <bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = nullptr;
        ListNode *head = nullptr;
        if (!l1)
            return l2;
        if (!l2)
            return l1;
        while (l1 || l2)
        {
            int tmp1, tmp2;
            if (!l1)
            {
                ans->next = l2;
                l2 = nullptr;
            }
            else if (!l2)
            {
                ans->next = l1;
                l1 = nullptr;
            }
            else
            {
                tmp1 = l1->val;
                tmp2 = l2->val;
                // printf("%d %d\n", tmp1, tmp2);
                if (tmp1 < tmp2)
                {
                    if (!ans)
                    {
                        // printf("initializing ans = l1 with %d\n", l1->val);
                        ans = l1;
                        head = ans;
                    }
                    else
                    {
                        // printf("add %d to ans\n", l1->val);
                        // ans->val = l1->val;
                        // ans = ans->next;
                        ans->next = l1;
                        ans = ans->next;
                    }

                    l1 = l1->next;
                }
                else
                {
                    if (!ans)
                    {
                        // printf("initializing ans = l2 with %d\n", l2->val);
                        ans = l2;
                        head = ans;
                    }
                    else
                    {
                        // printf("add %d to ans\n", l2->val);
                        // ans->val = l2->val;
                        // ans = ans->next;
                        ans->next = l2;
                        ans = ans->next;
                    }
                    l2 = l2->next;
                }
            }
        }
        return head;
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
    Solution a;
    ListNode *l1 = NULL;
    ListNode *l2 = NULL;
    addToTail(&l1, 1);
    addToTail(&l1, 2);
    addToTail(&l1, 4);
    addToTail(&l2, 1);
    addToTail(&l2, 3);
    addToTail(&l2, 4);
    printList(l1);
    printList(l2);
    printList(a.mergeTwoLists(l1, l2));
    return 0;
}