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

    queue<TreeNode*> s;
    vector<int> sum;

    TreeNode* replaceValueInTree(TreeNode* root) {
        s.push(root);
        root->val = 0;
       
        while(s.size() != 0)
        {
            
            int sz = s.size();
            int sum = 0;
            vector<TreeNode*> buf;
            for(int i=0; i<sz; i++)
            {
                TreeNode *c = s.front();
                s.pop();
                               
                buf.push_back(c);
                if(c->left) {s.push(c->left); sum += c->left->val;}
                if(c->right) {s.push(c->right);sum += c->right->val;}
            }

           for(auto& a: buf)
           {
                int t = sum;
                if(a->left) { t -= a->left->val;}
                if(a->right) { t -= a->right->val;}
                if(a->left) (a->left->val = t);
                if(a->right) (a->right->val = t);
           }
        }

        return root;
    }
};