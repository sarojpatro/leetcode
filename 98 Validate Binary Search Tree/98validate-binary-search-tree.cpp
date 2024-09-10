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
    bool isValid(TreeNode* root, TreeNode* minNode, TreeNode* maxNode)
    {
        if(!root) return true;
        if((maxNode && root->val >= maxNode->val) || (minNode && root->val <= minNode->val)) return false;
        return isValid(root->left, minNode, root) && isValid(root->right, root, maxNode);
    }
    bool isValidBST(TreeNode* root) {

        if(!root) return true;
        TreeNode *left = nullptr, *right=nullptr;
        return isValid(root, left, right);
        
    }
};