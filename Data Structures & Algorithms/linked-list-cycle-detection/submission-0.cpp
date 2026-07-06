/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* x = head;
        ListNode* y = head;
        while(x != nullptr && x->next != nullptr){
            x = x->next->next;
            y = y->next;

            if(x == y) return true;
        }
        return false;
    }
};
