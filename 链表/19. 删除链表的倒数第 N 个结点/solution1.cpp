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
        int count = 1;
        ListNode* node = head;
        while(node->next != nullptr) {
            count++;
            node = node->next;
        }
        node = head;
        int num = count - n;
        if(num == 0) head = head->next;
        for(int i = 1; i < num; i++) {
            node = node->next;
        }
        if(node->next != nullptr) node->next = node->next->next;
        return head;
    }
};