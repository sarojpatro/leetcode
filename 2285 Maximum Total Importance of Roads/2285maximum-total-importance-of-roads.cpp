class Solution {
public:

    long long maximumImportance(int n, vector<vector<int>>& roads) {
        map<int, int> mm;
        for(auto& r : roads)
        {
            mm[r[0]] += 1;
            mm[r[1]] += 1;
        }

        // Copy elements to a vector for sorting
        vector<pair<int, int>> vec(mm.begin(), mm.end());

        
        sort(vec.begin(), vec.end(), [] (const pair<int, int> &a,const pair<int, int> &b)
        {
            return a.second > b.second;
        }                
        );

        long long total = 0;
        long long m = n;

        for(auto& v: vec)
        {
            total += (v.second * m);
            m--;
        }

        return total;
    }
};