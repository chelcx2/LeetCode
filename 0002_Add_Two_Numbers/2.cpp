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

void printList(ListNode *head) {
    ListNode *tmp;
    tmp = head;
    if (tmp == NULL)
        cout << "empty list";
    else {
        while (tmp != NULL) {
            cout << tmp->val;
            tmp = tmp->next;
            if (tmp)
                cout << ", ";
        }
        cout << endl;
    }
}

void addToTail(ListNode **head, int val) {
    ListNode *node = new ListNode(val);
    if (!*head) {
        *head = node;
    }
    else {
        ListNode *tmp = *head;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = node;
    }
}


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum, carry = 0;
        ListNode* ans = nullptr;
        // vector<int> temp;
        while (l1 || l2) {
            if (l1 && l2) 
                sum = l1->val + l2->val + carry;
            
            else if (l1) 
                sum = l1->val + carry;
            
            else if (l2) 
                sum = l2->val + carry;
            
            carry = sum >= 10 ? 1 : 0;
            sum = sum % 10;
            // temp.push_back(sum);
            addToTail(&ans, sum);
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        if (carry)
            addToTail(&ans, 1);
        return ans;
    }
};

int main() {
    Solution a;
    vector<int> v1 = {2, 4, 3}, v2 = {5, 6, 4}, v3 = {9, 9, 9, 9, 9, 9, 9}, v4 = {9, 9, 9, 9};
    ListNode *l1 = nullptr, *l2 = nullptr, *l3 = nullptr, *l4 = nullptr;
    for (const auto i: v1)
        addToTail(&l1, i);
    for (const auto i: v2)
        addToTail(&l2, i);
    for (const auto i: v3)
        addToTail(&l3, i);
    for (const auto i: v4)
        addToTail(&l4, i);
    printList(a.addTwoNumbers(l1, l2));
    printList(a.addTwoNumbers(l3, l4));
    return 0;
}