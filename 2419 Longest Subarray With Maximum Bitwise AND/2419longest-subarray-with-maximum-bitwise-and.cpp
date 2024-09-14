class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m = 0, s=0, st=0;

        for(auto& c: nums)
        {
            if(c > m)
            {
                m = c;
                st = 0; s= 0;
            }

            if(c == m)
            {
                st++;
                //cout << "increasing index: " << i << "c: "<< c << "m: "<< m<< endl;
            }
            else
            {
                st=0;
            }
            s = max(s, st);

        }

        return s;
    }
};