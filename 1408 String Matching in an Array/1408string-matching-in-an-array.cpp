class Solution {
public:
    bool contains(string a, string b)
    {
        if(a.size() > b.size()) return false;
        if(a == b) return true;

        if(b.find(a) != string::npos) return true;
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), [](string a, string b){return a.size() < b.size();});

        size_t s = words.size();
        vector<string> ans;
        for(int i=0; i<s; i++)
        {
            for(int j=i+1; j<s; j++)
            {
                if (contains(words[i], words[j])) 
                {
                    if(find(ans.begin(), ans.end(), words[i]) == ans.end())
                        ans.push_back(words[i]);
                }
            }
        }

        return ans;
    }
};