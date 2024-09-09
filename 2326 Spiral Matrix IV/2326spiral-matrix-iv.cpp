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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        //Create a m*n matrix 
        vector<vector<int>> v(m, vector<int>(n,-1));

        //Navigate with a clockwise fashion
        int left=0, right=n-1, top=0, bottom=m-1;
        while(head)
        {
            //Fill top
            int i = left;
            while(head && i<=right)
            {
                v[top][i] = head->val;
                i++;
                head = head->next;
            }
            top++;

            //Fill right
            i = top;
            while(head && i<=bottom)
            {
                v[i][right] = head->val;
                i++;
                head = head->next;
            }
            right--;

            //Fill bottom
            i = right;
            while(head && i>=left)
            {
                v[bottom][i] = head->val;
                i--;
                head = head->next;
            }
            bottom--;

            //Fill left
            i=bottom;
            while(head && i >= top)
            {
                v[i][left] = head->val;
                i--;
                head = head->next;
            }
            left++;
        }

        return v;
    }
};