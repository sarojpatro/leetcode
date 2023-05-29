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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)
        {
            return l2;
        }
        if(l2 == nullptr)
        {
            return l1;
        }
        
        ListNode *cur1 = l1;
        ListNode *cur2 = l2;
        ListNode *start = nullptr;
        ListNode *res = nullptr;
        int carryover= 0;
        while(cur1 != nullptr || cur2 != nullptr || carryover)
        {
            if(start == nullptr )
            {
                start = res = new ListNode();
            }
            else 
            {
                res->next = new ListNode();
                res = res->next;
            }
            if(cur1 == nullptr && cur2 == nullptr)
            {
                res->val = carryover;
                carryover = res->val / 10;
            }
            else if(cur1 == nullptr)
            {
                res->val = cur2->val + carryover;
                carryover = res->val / 10;
                res->val = res->val % 10;
                cur2 = cur2->next;
            }
            else if(cur1 != nullptr && cur2 == nullptr)
            {
                res->val = cur1->val + carryover;
                carryover = res->val / 10;
                res->val = res->val % 10;
                cur1 = cur1->next;
            }
            else
            {
                //std::cout << res->val % 10 << " " << carryover << " ";
                res->val = cur1->val + cur2->val + carryover;
                //std:: cout << res->val << std::endl;
                carryover = res->val / 10;
                //std::cout << carryover << " " << std::endl;
                res->val = res->val % 10;
                cur1 = cur1->next;
                cur2 = cur2->next;
            }
        }
        
        return start;
    }
};