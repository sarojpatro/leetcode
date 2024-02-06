class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> a;
        for(int i=0; i<s.size(); i++)
        {
           if(a.find(s[i]) == a.end())
           {
              a[s[i]] = i; 
           }
           else
           {
               a[s[i]] = INT_MAX;
           }
        }

        int ans = INT_MAX;
        for(auto& x: a)
        {
            ans = min(ans, x.second);
        }

        return (ans == INT_MAX ? -1 : ans);
        
    }
};