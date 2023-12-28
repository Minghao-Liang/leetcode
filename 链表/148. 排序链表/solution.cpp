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
    ListNode* sortList(ListNode* head) {
        return sortList(head, nullptr);
    }

    ListNode* sortList(ListNode* head, ListNode* rear) {
        if (head == nullptr) return head;
        if(head->next == rear) {
            head->next = nullptr;
            return head;
        }
        ListNode* fast = head, *slow = head;
        while(fast != rear) {
            slow = slow->next;
            fast = fast->next;
            if(fast != rear) {
                fast = fast->next;
            }
        }

        ListNode *l1 = sortList(head, slow);
        ListNode *l2 = sortList(slow, rear);

        return merge(l1, l2);
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode *node = new ListNode();
        ListNode *q = node;
        while(l1 != nullptr && l2 != nullptr) {
            if(l1->val < l2->val) {
                q->next = l1;
                q = l1;
                l1 = l1->next;
            }
            else {
                q->next = l2;
                q = l2;
                l2 = l2->next;
            }
        }
        q->next = l1 ? l1 : l2;
        return node->next;
    }
};