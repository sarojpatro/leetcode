class Solution {
public:
    bool isPrefixAndSuffix(string a, string b)
    {
        if(b == a) return true;
        int sa = a.size();
        int sb = b.size();
        if(sb < sa) return false;

        size_t s = b.find(a);
        if(s !=  0) return false; 

        s = b.rfind(a);
        if(s != sb-sa) return false;

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        //sort(words.begin(), words.end(), [](string a, string b){return a.size() < b.size();});
        int ans=0;
        size_t s = words.size();
        for(int i=0; i<s;i++)
        {
            for(int j=i+1; j<s;j++)
            {
                if(isPrefixAndSuffix(words[i], words[j])) ans++;
            }
        }

        return ans;
    }
};