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
    void reverseList(ListNode* head) {
        ListNode *p = nullptr;
        ListNode *q = head;
        ListNode *node = new ListNode();
        while(q != nullptr) {
            node = q->next;
            q->next = p;
            p = q;
            q = node;
        }
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right)   return head;  

        ListNode *dummy = new ListNode(0, head);
        ListNode * p =dummy;
        ListNode *leftnode = head;
        ListNode *rightnode = head;
        for(int i = 1; i < left; i++) {
            p = p->next;
            leftnode = leftnode->next;
        }
        for(int i = 1; i < right; i++) {
            rightnode = rightnode->next;
        }
        ListNode *m = rightnode->next;
        p->next = nullptr;
        rightnode->next = nullptr;

        reverseList(leftnode);
        p->next = rightnode;
        leftnode->next = m;
        return dummy->next;
    }
};