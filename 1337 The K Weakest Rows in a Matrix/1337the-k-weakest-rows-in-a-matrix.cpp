class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> weakest_pair;



        for(int i=0; i<mat.size(); i++)
        {
            int sum = 0;
            for (int j=0; j<mat[i].size(); j++)
            {
                sum += mat[i][j];
            }
            
            weakest_pair.push_back({sum, i});
        }

        sort(weakest_pair.begin(), weakest_pair.end());

        vector<int> result;
        for(int i=0; i<k; i++)
        {
            result.push_back(weakest_pair[i].second);
        }

        return result;
    }
};