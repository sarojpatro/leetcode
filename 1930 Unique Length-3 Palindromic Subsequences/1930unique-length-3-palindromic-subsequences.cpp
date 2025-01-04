class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;
        map<int, vector<int>> m;
        for(int i=0; i<s.size();i++)
        {
            m[s[i] - 'a'].push_back(i);
        }

        for(auto a : m)
        {
            set<char> t;
            int sz = a.second.size();
            int x = a.second[0]; int y = a.second[sz-1];
            if(y-x >=2)
            {
                for(int i=x+1; i<y; i++)
                {
                    t.insert(s[i]);
                }
                ans += t.size();
            }
        }
       return ans;
    }
};