class Solution {
public:


    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size(), n=grid[0].size();
        vector<vector<vector<int>>> memo(m, vector<vector<int>>(n, vector<int>(n, -1)));
        return result(grid, 0, 0, grid[0].size()-1, memo);
    }

    int result(vector<vector<int>>& grid, int row, int col1, int col2, vector<vector<vector<int>>> &memo)
    {

        //Write for the excptions
        if(row < 0 || row > grid.size()-1 || col1 < 0 || col1 >grid[0].size()-1 || col2 < 0 || col2 > grid[0].size()-1)
        {
            return 0;
        }

        if(memo[row][col1][col2] != -1)
        {
            return memo[row][col1][col2];
        }

        int result_n = 0;
        result_n += grid[row][col1];
        result_n += grid[row][col2];

        int max_n=0;
        for(int m=col1-1; m<col1+2; m++)
        {
            for(int n=col2-1; n<col2+2; n++)
            {
                if(m < n)
                {
                    max_n = max(max_n, result(grid, row+1, m, n, memo));
                }
            }
        }

        result_n += max_n;
        return memo[row][col1][col2] = result_n;

    }
};