class Solution {
public:
    bool vowel[CHAR_MAX] = {false};
    bool isVowel(char c)
    {
        return vowel[c];
    }
    Solution()
    {
        vowel['a'] = true;
        vowel['e'] = true;
        vowel['i'] = true;
        vowel['o'] = true;
        vowel['u'] = true;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> v;
        int prev = 0;
        int i=0;
        for(auto& word: words)
        {
            int s = word.size()-1;
            if(isVowel(word[0]) && isVowel(word[s]))
            {
                v.push_back(prev + 1);
            }
            else
            {
                v.push_back(prev);
            }

            prev = v[i];
            i++;
        }

        vector<int> ans;
        for(auto q: queries)
        {
            if(q[0] == 0) ans.push_back(v[q[1]]);
            else ans.push_back(v[q[1]] - v[q[0]-1]);
        }

        return ans;
    }
};