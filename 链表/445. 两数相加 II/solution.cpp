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
    ListNode* reverseList(ListNode* head) {
        ListNode *p = nullptr;
        ListNode *q = head;
        while(q != nullptr) {
            head = q->next;
            q->next = p;
            p = q;
            q = head;
        }
        return p;
    }
    ListNode* addTwo(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        int cout = 0;
        ListNode *list = new ListNode();
        ListNode *head = list;
        while(l1 || l2) {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int v = n1 + n2 + cout;
            if(v >= 10) {
                cout = 1;
                v = v % 10;
            }
            else {
                cout = 0;
            }
            list->next = new ListNode(v);
            if(l1) {
                l1 = l1->next;
            }
            if(l2) {
                l2 = l2->next;
            }
            list = list->next;
        }
        if(cout == 1) {
            list->next = new ListNode(1);
        }
        return head->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        auto list = addTwo(l1, l2);
        return reverseList(list);
    }
};