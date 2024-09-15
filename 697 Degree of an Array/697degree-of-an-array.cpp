class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, vector<int>> m;
        int mx = INT_MIN;

        int i=0;
        for(auto& n: nums)
        {
            if(m[n].size() == 0)
            {
                vector<int> v{1, i, i};
                m[n] = v;
            }
            else
            {
                m[n][0] += 1;
                m[n][2] = i;
            }
            mx = max(mx, m[n][0]);
            i++;
        }

        int md = INT_MAX;
        for(auto& c: m)
        {
            //cout << c.first<< " " << c.second[0] << " " << c.second[1] << " " << c.second[2] << endl;
            if(c.second[0] == mx) md = min(md, c.second[2]-c.second[1]+1);
        }


        return md;
    }
};