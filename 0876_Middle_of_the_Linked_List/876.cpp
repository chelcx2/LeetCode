#include <bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<int> tr;
        ListNode* origin = head;
        while (head) {
            tr.push_back(head->val);
            head = head->next;
        }
        int idx = tr.size() % 2 == 1 ? (tr.size() - 1) / 2 : tr.size() / 2;
        // cout << idx << "\n";
        int i = 0;
        while (origin) {
            if (i == idx)
                return origin;
            i++;
            origin = origin -> next;
        }
        return origin;
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

int main() {
    ListNode *t1 = nullptr, *t2 = nullptr;
    Solution a;
    vector<int> v1 = {1, 2, 3, 4, 5}, v2 = {1, 2, 3, 4, 5, 6};
    for (const int i: v1)
        addToTail(&t1, i);
    for (const int i: v2)
        addToTail(&t2, i);
    ListNode *a1 = a.middleNode(t1), *a2 = a.middleNode(t2);
    printList(a1);
    printList(a2);

    return 0;

}