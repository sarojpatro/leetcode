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
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr)
        {
            return sum;
        }

        int val = root->val;
        if(val <= high && val >= low)
        {
            return val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        }
        else if(val > high)
        {
            return rangeSumBST(root->left, low, high);
        }
        else if(val < low)
        {
            return rangeSumBST(root->right, low, high);
        }

        return sum;
    }
};