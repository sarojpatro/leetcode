class Solution {
public:
    int minAddToMakeValid(string s) {
        int i=0;
        int j=0;
        for(char c : s)
        {
            if(c == '(') i++;
            else
            {
                if(i==0) j++;
                else i--;
            }
        }

        return i+j;
    }
};