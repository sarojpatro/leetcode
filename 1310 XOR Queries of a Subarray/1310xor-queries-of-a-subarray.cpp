class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

        vector<int> ans(queries.size(), 0);
        if(queries.size() == 0) return ans;
        vector<int> xsum(arr.size(), 0);
        xsum[0] = arr[0];
        for(int i=1; i<arr.size(); i++)
        {
            xsum[i] = xsum[i-1]^arr[i];
        }

 
        for(int i=0; i<queries.size(); i++)
        {
            int a = queries[i][0];
            int b = queries[i][1];

            if(a == 0) ans[i]=xsum[b];
            else if(a == b) ans[i]=arr[a];
            else
            {
                ans[i] = xsum[b]^xsum[a-1];
            }
        }

        return ans;
    }
};