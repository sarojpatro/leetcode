class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

        vector<int> row_ones(grid.size()), col_ones(grid[0].size());

        for (int i = 0; i < grid.size() ; i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                row_ones[i] += grid[i][j] ;
                col_ones[j] += grid[i][j];
            }
        }

        vector<vector<int>> diff (grid.size(), vector<int> (grid[0].size()));
        for (int i = 0; i < grid.size(); i++)
        {
            //vector<int> columns;
            for(int j = 0; j < grid[0].size(); j++)
            {
                //columns.push_back(row_ones[i]+col_ones[j]-(grid.size()-row_ones[i])-(grid[0].size()-col_ones[j]));
                diff[i][j] = row_ones[i]+col_ones[j]-(grid.size()-row_ones[i])-(grid[0].size()-col_ones[j]);
            }
            //diff.push_back(columns);
        }


        return diff;
    }
};