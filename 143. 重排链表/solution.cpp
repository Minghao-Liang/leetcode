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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* p = nullptr;
        ListNode* q = head;

        while(q) {
            ListNode* c = q->next;
            q->next = p;
            p = q;
            q = c;
        }
        return p;
    }

    void mergeList(ListNode* head1, ListNode* head2) {
        ListNode* p;
        ListNode* q;

        while(head1 && head2) {
            p = head1->next;
            q = head2->next;
            head1->next = head2;
            head2->next = p;
            head1 = p;
            head2 = q;
        }
    }

    void reorderList(ListNode* head) {
        ListNode* m = middleNode(head);
        ListNode* l1 = head;
        ListNode* l2 = m->next;
        m->next = nullptr;
        l2 = reverseList(l2);
        mergeList(l1, l2);
    }
};