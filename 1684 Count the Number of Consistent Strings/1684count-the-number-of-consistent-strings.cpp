class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int allowedchars[26]={0};
        int valid = words.size();

        for(auto& c: allowed)
        {
            allowedchars[c-'a'] = 1;
        }


        for(auto& word:words)
        {
            for(auto& c: word)
            {
                if(allowedchars[c-'a'] == 0) 
                {
                    valid--; 
                    break;
                }
            }
        }
        return valid;
    }
};