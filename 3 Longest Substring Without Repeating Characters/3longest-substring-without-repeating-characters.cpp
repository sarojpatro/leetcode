class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;

        if(s.size() == 0 || s.size() == 1) return s.size();
        int i = 0;
        int j = 1;
        m[s[0]]++;
        int l=1, ml=1;

        while(j<s.size())
        {
            if(m[s[j]] == 0)
            {
                //cout << "should not come here 2" << endl;
                m[s[j]]++;
                j++;
                l++;
                ml = max(ml, l);
            }
            else
            {
                m[s[i]] = 0;
                i++;
                l--;
            }

            //cout << "l = " << l << " i= " << i << " j= " << j << endl;
        }

        return ml;
    }
};