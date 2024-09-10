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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> level_order;

        if(root == nullptr)
        {
            return level_order;
        }

        queue<TreeNode *> level_queue;
        level_queue.push(root);

        while(!level_queue.empty())
        {
  
            vector<int> level_v;
            int current_size = level_queue.size();
            for(int i=0; i<current_size;i++)
            {
                auto num = level_queue.front();
                level_queue.pop();

                level_v.push_back(num->val);

                if(num->left)
                {
                    level_queue.push(num->left);
                }
                if(num->right)
                {
                    level_queue.push(num->right);
                }
            }


            level_order.push_back(level_v);

        }



        return level_order;
    }
};