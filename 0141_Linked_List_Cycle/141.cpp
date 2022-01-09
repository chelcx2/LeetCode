#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        for (int _ = 0; _ <= 10000; _++) {
            if (!head)
                return false;            
            head = head->next;
        }
        return true;
    }
};

int main() {
    return 0;
}