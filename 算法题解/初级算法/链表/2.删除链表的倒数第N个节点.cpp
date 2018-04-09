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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head;
        ListNode *q = head;
        if(head->next == NULL) return NULL;
        for(int i = 0; i != n; i++){
            q = q->next; 
        }
        if(q == NULL) return head->next;
        while(q->next != NULL){
            q = q->next;
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        delete q;
        q =NULL;
        return head;
    }
};