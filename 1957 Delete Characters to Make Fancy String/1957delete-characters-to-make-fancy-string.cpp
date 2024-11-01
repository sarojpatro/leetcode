class Solution {
public:
    string makeFancyString(string s) {
        map<int, int> dm;
        int sz = s.size();
        if(sz <= 2) return s;

        int sn = 1;
        for(int i=1; i<sz; i++)
        {
            if(s[i] == s[i-1]) sn++;
            else sn = 1;

            if(sn >= 3) 
            {
                dm[i-sn+1] = sn;
            }
        }

        int delta = 0;
        for(auto a: dm)
        {
            s.erase(a.first-delta, a.second-2);
            delta += a.second-2;
        }

        return s;

    }
};