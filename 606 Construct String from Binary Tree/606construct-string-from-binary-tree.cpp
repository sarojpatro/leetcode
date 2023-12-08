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
    string tree2str(TreeNode* root) {
        if(root == nullptr)
        {
            return string();
        }

        string sroot = std::to_string(root->val) ;
        string left_sroot = tree2str(root->left);
        string left_string, right_string;
        string right_sroot = tree2str(root->right);

        if (right_sroot == string() && left_sroot == string())
        {
          right_string = right_sroot;
          left_string = left_sroot;
        }
        else if (right_sroot != string() && left_sroot == string())
        {
          right_string = '(' + right_sroot + ')';
          left_string = '(' +  left_sroot + ')';
        }
        else if (right_sroot == string() && left_sroot != string())
        {
          right_string = right_sroot;
          left_string = '(' +  left_sroot + ')';
        }
        else 
        {
          right_string = '(' + right_sroot + ')';
          left_string = '(' +  left_sroot + ')';
        }

        return sroot + left_string + right_string;
    }
};