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
    int max_diff= 0;
    int recurse(TreeNode* root, int mn = 100000, int mx = -1)
    {
        if(root == nullptr) return (mx - mn);
        return max(recurse(root->left, min(mn, root->val), max(mx, root->val)),
        recurse(root->right,min(mn, root->val), max(mx, root->val)));
    }
    int maxAncestorDiff(TreeNode* root) {
        return recurse(root);
    }
};