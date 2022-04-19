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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head, *pre = head;
        while (n-- != 0) ptr = ptr->next;
        if (!ptr) return head->next;
        while (ptr->next){ 
            ptr = ptr->next;
            pre = pre->next;
        }
        pre->next = pre->next->next;
        return head;
        
    }
};
