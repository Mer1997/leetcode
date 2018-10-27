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
    bool isPalindrome(ListNode* head) {
        stack<int> my;
        ListNode *p = head;
        while(p != NULL){
            my.push(p->val);
            p = p->next;
        }
        while(head != NULL){
            if(head->val != my.top()) return false;
            my.pop();
            head = head->next;
        }
        return true;
    }
};