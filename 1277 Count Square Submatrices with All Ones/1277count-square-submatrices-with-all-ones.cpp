class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>> ans = matrix;

        int ms = matrix.size();
        int ms1 = matrix[0].size();
        for(int i = 1; i<ms; i++)
        {
            for(int j =1; j< ms1; j++)
            {
                if(ans[i][j] == 1)
                    ans[i][j] = min(ans[i-1][j-1], min(ans[i-1][j], ans[i][j-1])) + 1;
            }
        }

        int r = 0;
        for(int i = 0; i<ans.size(); i++)
        {
            for(int j =0; j< ans[0].size(); j++)
            {
                r += ans[i][j];
            }
        }


        return r;
    }
};