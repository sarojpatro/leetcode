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
    vector<int> root1_v;
    vector<int> root2_v;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        // print the leafs left to right
        printLeafs(root1, root1_v);
        printLeafs(root2, root2_v);

        return root1_v == root2_v;
    }

    void printLeafs(TreeNode* root, vector<int>& v)
    {
        if(root == nullptr)
            return;
        printLeafs(root->left, v);
        if(root->left == nullptr && root->right == nullptr)
            v.push_back(root->val);
        printLeafs(root->right, v);
    }
};