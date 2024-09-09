class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int s = n*n;
        int v=1, i;
        int left = 0, top = 0, right = n-1, bottom=n-1;
        vector<vector<int>> ans(n, vector<int>(n,0));
        while(v<=s)
        {
            for(i=left;i<=right && v<=s;i++)
            {
                ans[top][i] = v;
                v++;
            }
            top++;

            for(i=top;i<=bottom && v<=s;i++)
            {
                ans[i][right] = v;
                v++;
            }
            right--;

            for(i=right;i>=left && v<=s;i--)
            {
                ans[bottom][i] = v;
                v++;
            }
            bottom--;

            for(i=bottom;i>=top && v<=s;i--)
            {
                ans[i][left] = v;
                v++;
            }
            left++;
        }

        return ans;
    }
};