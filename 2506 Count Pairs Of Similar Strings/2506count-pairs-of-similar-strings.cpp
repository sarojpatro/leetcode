class Solution {
public:

    bool isSimilar(string w1, string w2)
    {
        int schars1[26]= {0};
        int schars2[26]= {0};
        int j=0;
        for(auto& c: w1)
        {
            if(schars1[c-'a'] == 0)
            {
                schars1[c-'a']=1;
                j++;
            }
        }

        int k=0;
        for(auto& c: w2)
        {
            if(schars2[c-'a'] == 0)
            {
                schars2[c-'a']=1;
                k++;
            }
        }

        if(k!=j) return false;

        for(auto& c: w2)
        {
            if(schars1[c - 'a'] == 0) 
            {
                return false;
            }
        }

        //cout << w1 << " " << w2 << endl;
        return true;
    }

    int similarPairs(vector<string>& words) {
        int n=0;
        for(int i=0; i<words.size()-1;i++)
        {
            for(int j=i+1; j<words.size();j++)
            {
                //cout << i << " " << j << endl;
                if(isSimilar(words[i],words[j])) n++;
            }
        }
        return n;
    }
}; 