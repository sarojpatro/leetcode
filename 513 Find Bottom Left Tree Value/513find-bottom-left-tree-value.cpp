/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> sameLevel;
        sameLevel.push(root);

        TreeNode* cur;
        while(sameLevel.size() !=0) 
        {
            cur = sameLevel.front();
            sameLevel.pop();
            if(cur->right) sameLevel.push(cur->right);
            if(cur->left) sameLevel.push(cur->left);
        }

        
        return cur->val;
    }
};