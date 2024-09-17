class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> m;
        
        stringstream ss1(s1);
        string w;
        while(ss1 >> w)
        {
            m[w] +=1;
        }

        stringstream ss2(s2);
        while(ss2 >> w)
        {
            m[w] +=1;
        }

        vector<string> ans;
        for(auto& a:m)
        {
            //cout << a.first << " " << a.second.first << " "<< a.second.second<<endl;
            if((a.second == 1))
            {
                ans.push_back(a.first);
            }
        }
        
        return ans;
    }
};