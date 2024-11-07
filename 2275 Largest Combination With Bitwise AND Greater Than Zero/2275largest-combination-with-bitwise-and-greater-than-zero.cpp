class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> m(24, 0);
        int mx = 0;

        for(auto& a : candidates)
        {
            for(int i=0; i<24; i++)
            {
                if(a & 1)
                {
                    m[i]++;
                }
                a = a >> 1;
                if(a == 0) break;
            }
        }


        for(int i=0; i < 24; i++)
        {
            mx = max(mx, m[i]);
        }

        return mx;
    }
};