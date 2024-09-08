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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v;
        int s = 0; ListNode* a=head;
        while(a != 0) {s++; a=a->next;} //Find the size

        int es = s/k;
        int esx = s%k;

        ListNode* c=head;
        ListNode* cn = nullptr;

        for(int j=0; j<k;j++)
        {
            for(int i=0; i<es; i++)
            {
                if(i == 0)
                {
                    ListNode *lh = new ListNode(c->val);
                    v.push_back(lh);
                    cn = lh;
                }
                else
                {
                    cn->next = new ListNode(c->val);
                    cn = cn->next;
                }
                c = c->next;
            }

            if(esx != 0)
            {
                if(!cn)
                {
                    ListNode *lh = new ListNode(c->val);
                    v.push_back(lh);
                    //cn = lh;
                }
                else
                {
                    cn->next = new ListNode(c->val);
                    cn = cn->next;
                }
                
                c = c->next;
                esx--;
            }
        }

        while(v.size() < k)
        {
            v.push_back(nullptr);
        }

        return v;
    }
};