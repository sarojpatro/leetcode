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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        sort(nums.begin(), nums.end());

        ListNode *cur = head;
        ListNode *prev = nullptr;
        while(cur != nullptr)
        {
            if(binary_search(nums.begin(), nums.end(), cur->val))
            {
                if(cur == head)
                {
                    //remove the head
                    head = head->next;
                    delete cur;
                    cur = head;
                }
                else
                {
                    //remove the element
                    prev->next = cur->next;
                    delete cur;
                    cur = prev->next;
                }
            }
            else
            {
                prev = cur;
                cur = cur->next;
            }
        }

        return head;
    }
};