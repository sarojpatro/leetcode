class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        // Create two sum vectors for rows and columns
        vector<int> row_sum(mat.size()), col_sum(mat[0].size());

        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[0].size(); j++)
            {
                row_sum[i] += mat[i][j];
                col_sum[j] += mat[i][j];
            }
        }

        int num_special = 0;
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[0].size(); j++)
            {
                if(mat[i][j] == 1 && row_sum[i] == 1 && col_sum[j] == 1)
                {
                    num_special += 1;
                }
            }
        }

        return num_special;

    }
};