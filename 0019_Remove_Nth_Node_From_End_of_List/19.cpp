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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int len = 0, idx = 0;
        ListNode *temp = head;
        while (head)
        {
            len++;
            head = head->next;
        }
        if (len == 1)
            return nullptr;
        head = temp;
        // cout << len << "\n";
        while (head)
        {
            // printf("idx = %d, val = %d\n", idx, head->val);
            if (idx == len - n - 1)
            {
                head->next = head->next->next;
            }
            idx++;
            head = head->next;
        }
        return temp;
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
        cout << "empty list\n";
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
    // ListNode *t1 = NULL;
    // ListNode *t2 = NULL;
    // ListNode *t3 = NULL;
    ListNode *t1 = NULL, *t2 = NULL, *t3 = NULL;
    int arr1[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
        addToTail(&t1, arr1[i]);
    addToTail(&t2, 1);
    addToTail(&t3, 1);
    addToTail(&t3, 2);
    printList(a.removeNthFromEnd(t1, 2));
    printList(a.removeNthFromEnd(t2, 1));
    printList(a.removeNthFromEnd(t3, 1));
    return 0;
}