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
private:
    vector<int> val;
    int len = 0;
public:
    Solution(ListNode* head) {
        while (head) {
            val.push_back(head->val);
            head = head->next;
            len++;
        }
    }
    
    int getRandom() {
        int idx = rand() % len;
        return val[idx];
    }
};


void addToTail(ListNode **head, int val)
{
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

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */

int main() {
    vector<int> v = {1, 2, 3};
    ListNode* head = nullptr;
    for (const int i: v)
        addToTail(&head, i);
    
    Solution* obj = new Solution(head);
    for (int _ = 0; _ < 10; _++) {
        cout << obj->getRandom() << " ";
    }
    return 0;
}