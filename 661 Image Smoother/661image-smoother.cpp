class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> res = img;
        int m = img.size();
        int n = img[0].size();
        for (int i = 0; i < m ; i++)
        {
            for (int j = 0; j < n ; j++)
            {
                unsigned int sum = 0; 
                int c = 0;
                for(int a = max(0, i-1); a < min(m, i+2); a++)
                    for(int b = max(0, j-1); b < min(n, j+2); b++)
                    {
                        sum += img[a][b];
                        c++;
                    }
                res[i][j] = sum/c;
            }
        }
        
        return res;
    }

};