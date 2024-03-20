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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* ap = nullptr;
        

        for(int i=0; i<a; i++)
        {
            ap = l1;
            l1 = l1->next;
        }

        ListNode* bn = ap->next;
        for(int i=a; i<b; i++)
        {
            bn = bn->next;
        }

        ap->next = l2;
        while(l2->next)
        {
            l2 = l2->next;
        }

        l2->next = bn->next;
        return list1;
    }
    
};