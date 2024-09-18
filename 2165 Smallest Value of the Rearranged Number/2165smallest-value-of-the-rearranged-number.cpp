class Solution {
public:
    long long smallestNumber(long long num) 
    {
        string s = to_string(num);
        bool is_negative = false;
        if(s[0] == '-')        
        {
            //s=s.substr(1, s.size()-1);
            //size_t = s.find_first_not_of('-');
            s=s.substr(1);
            is_negative = true;
        }
        vector<char> lc;
        for(auto& c: s)
        {
            lc.push_back(c);
        }
        if(!is_negative)
        sort(lc.begin(), lc.end());
        else
        sort(lc.begin(), lc.end(), greater<char>());
        
        long long ans;
        s="";
        string s1;
        if(is_negative) s+= "-";
        bool lz = true;

        for(auto& c: lc)
        {
            if(lz && c == '0')
            {
                s1+="0";
            }
            else 
            {
                s+=c;
                if (lz == true)
                {
                    s+=s1;
                }
                lz = false;
            }
        }

        return atoll(s.c_str());
    }
};