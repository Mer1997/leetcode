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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode *re = NULL;
        if(l1->val < l2->val){
            re = l1;
            l1 = l1->next;
        }else {
            re = l2;
            l2 = l2->next;
        }
        ListNode *p = re;
        while (!(l1 == NULL || l2 == NULL)){
            if(l1->val < l2->val){
                p->next = l1;
                l1 = l1->next;
            }else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }
        if(l1 == NULL) p->next = l2;
        else p->next = l1;
        return re;
    }
};