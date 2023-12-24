class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int evenStart=0;
        for(int i=0; i < s.size(); i++)
        {
            if(i%2 == 0)
            {
                if(s[i] != '0' )
                {
                    evenStart += 1;
                }
            }
            else
            {
                if(s[i] != '1' )
                {
                    evenStart += 1;
                }
            }
        }
        return min(evenStart, n-evenStart);
    }
};