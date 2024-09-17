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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* first_list = list1;
        ListNode* second_list = list2;
        ListNode* start = nullptr;
        ListNode* final_list = nullptr;

        int cur_value = -101;

        if(first_list == nullptr)
        {
            return second_list;
        }

        if(second_list == nullptr)
        {
            return first_list;
        }

        
        while(first_list != nullptr || second_list != nullptr)
        {
            ListNode* temp;
            if(first_list && second_list && first_list->val <= second_list->val)
            {
                temp = new ListNode(first_list->val);
                first_list = first_list->next;
            }
            else if(first_list && second_list && second_list->val < first_list->val)
            {
                temp = new ListNode(second_list->val);
                second_list = second_list->next;
            }
            else if(first_list == nullptr)
            {
                temp = new ListNode(second_list->val);
                second_list = second_list->next;
            }
            else
            {
                temp = new ListNode(first_list->val);
                first_list = first_list->next;
            }

            if(final_list != nullptr)
            {
                final_list->next = temp;
                final_list = final_list->next;
            }
            else
            {
                final_list = temp;
                start = final_list;
            }

        }
        return start;
    }
};