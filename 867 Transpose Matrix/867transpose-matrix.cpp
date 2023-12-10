class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int j = matrix.size();
        if( j == 0)
        {
            return vector<vector<int>>();
        }
        int i = matrix[0].size();

        vector<vector<int>> ans(i, vector<int>(j));

        for (int a = 0 ; a < i ; a++)
        {
            for (int b = 0 ; b < j ; b++)
            {
                ans[a][b] = matrix[b][a];
            }
        }

        return ans;
    }
};