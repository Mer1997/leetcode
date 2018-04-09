/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        ListNode *p = head;
        ListNode *q = head->next;
        ListNode *temp = q;
        while(q != NULL){
            q = q->next;
            temp->next = p;
            p = temp;
            temp = q;
        }
        head->next = NULL;
        return p;
    }
};