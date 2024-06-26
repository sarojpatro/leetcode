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
    void inorder_traversal(TreeNode* root, vector<int> &v)
    {
        if(root == nullptr) return;
        inorder_traversal(root->left, v);
        v.push_back(root->val);
        inorder_traversal(root->right, v);
    }

    TreeNode* BST(int start, int end, vector<int> v)
    {
        if( start > end) return nullptr;
        int mid = (start + end) / 2;

        TreeNode* root = new TreeNode(v[mid]);
        //Left and right sub tree
        root->left  = BST(start, mid - 1, v);
        root->right  = BST(mid + 1, end, v);

        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inorder_traversal(root, v);
        return BST(0, v.size()-1, v);

    }
};