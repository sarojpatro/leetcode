class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
      
        unordered_set<string> source_set;
        for(auto& i: paths)
        {
            source_set.insert(i[0]);
        }

        for(auto& i : paths)
        {
            auto key = i[1];
            if (source_set.count(key) != 1)
            {
                return key;
            }
        }

        return string();
    }
};