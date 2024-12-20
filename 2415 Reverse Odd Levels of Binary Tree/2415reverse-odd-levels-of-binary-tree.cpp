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
    void t(TreeNode* l, TreeNode *r, int level)
    {
        if(l == nullptr) return;
        if(r == nullptr) return;

        if(level % 2 == 0) swap(l->val, r->val);
        t(l->left, r->right, level + 1);
        t(l->right, r->left, level + 1);
    }

    TreeNode* reverseOddLevels(TreeNode* root) {

        //Traverse
        t(root->left, root->right, 0);

        return root;
    }
};