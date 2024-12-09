class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int s = nums.size();
        if(s == 1) return vector<bool>(queries.size(), true);
        vector<pair<int, int>> p(s);
        p[0] = {0, 0};

        for(int i=1; i<s; i++)
        {
            if((nums[i-1] + nums[i]) % 2 != 0)
            {
                p[i].first = (p[i-1].first + 1);
                p[i].second = (p[i-1].second);
                //cout << "first: " << p[i].first;
            }
            else
            {
                p[i].second = (p[i-1].second + 1);
                p[i].first = (p[i-1].first);
                //cout << "second: " << p[i].second;
            }

            //cout << p[i].first;
        }
        //cout << endl;

        int qs = queries.size();
        vector<bool> q(qs, true);
        for(int i=0; i<qs; i++)
        {
            auto a = queries[i]; // a[0], a[1]
            if(p[a[1]].second - p[a[0]].second != 0)
            {
                q[i] = false;
            }

        }

        return q;
    }
};