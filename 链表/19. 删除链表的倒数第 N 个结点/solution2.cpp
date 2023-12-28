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
        ListNode* node = new ListNode(0, head);
        ListNode* p = head;
        ListNode* q = node;
        for(int i = 0; i < n; i++) {
            p = p->next;
        }
        while(p != nullptr) {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        head = node->next;
        delete node;
        return head;
    }
};