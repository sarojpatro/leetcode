

class Solution {
public:
    int minLength(string s) {
        bool matchFound = true;

        while(matchFound)
        {
            matchFound = false;
            if(s.size() == 0) return 0;
            int sz = s.size();
            for(int i=0; i<sz-1;i++)
            {
                if((s[i] == 'A' && s[i+1] == 'B') ||
                (s[i] == 'C' && s[i+1] == 'D'))
                {
                    s.erase(i, 2);
                    matchFound = true;
                    break;
                }
            }
        }

        return s.size();
    }
};