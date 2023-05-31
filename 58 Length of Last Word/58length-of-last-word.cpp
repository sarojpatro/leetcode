class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int last_length = 0;
        for(int i =0; i<s.size(); i++)
        {
            if(s[i] != ' ')
            {
                length++;
            }
            else
            {   
                if(length != 0)
                {
                    last_length = length;
                }
                length = 0;
            }
        }
        
        if(length == 0)
        {
            length = last_length;
        }

        return length;
    }
};