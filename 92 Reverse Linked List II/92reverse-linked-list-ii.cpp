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

    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode d(0);
        ListNode* l=&d;

        l->next = head;
        ListNode* prev = &d;
        

        for(int i=0; i<m-1;i++)
        {
            prev = prev->next;
        }

        ListNode* c = prev->next;
        for(int i=0; i<n-m;i++)
        {
            ListNode* t = prev->next;
            prev->next = c->next;
            c->next =  c->next->next;
            prev->next->next = t;
        }

        return l->next;
    }
};