class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> so;
        int mr = matrix.size();
        int mc = matrix[0].size();
        int left=0, right=mc-1, top=0, bottom=mr-1;

        while(so.size() < mr*mc)
        {
            int i=left;
            while(i<=right && so.size() < mr*mc)
            {
                so.push_back(matrix[top][i]);
                i++;
            }
            top++;

            i=top;
            while(i<=bottom && so.size() < mr*mc)
            {
                so.push_back(matrix[i][right]);
                i++;
            }
            right--;

            i=right;
            while(i>=left && so.size() < mr*mc)
            {
                so.push_back(matrix[bottom][i]);
                i--;
            }
            bottom--;

            i=bottom;
            while(i>=top && so.size() < mr*mc)
            {
                so.push_back(matrix[i][left]);
                i--;
            }
            left++;
        }

        return so;

    }
};