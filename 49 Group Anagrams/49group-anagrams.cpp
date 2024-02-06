class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map_s;
        for(auto& str: strs)
        {
            string cur = str;
            sort(str.begin(), str.end());
            map_s[str].push_back(cur);
        }

        vector<vector<string>> ret;
        for(auto& s: map_s)
        {
            ret.push_back(s.second);
        }
   
        return ret;
    }
};