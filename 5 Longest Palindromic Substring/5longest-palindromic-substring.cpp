class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        int max_length = 0;
        string sub_s;

        if(len <= 1)
        {
            return s;
        }

        for(int i=0; i<len ; i++)
        {
            int l=i;
            int r=i;
            int left =0;
            int right =0;

            while((l >=0) && (r<len) && (s[l] == s[r]) )
            {
                left = l;
                right = r;
                l--;
                r++;
            }
            
            if(right-left+1 > max_length)
            {
                max_length = right - left+1;
                sub_s = s.substr(left,right-left+1);
            }

            l=i;
            r=i+1;
            left =0;
            right =0;

            while((l >=0) && (r<len) && (s[l] == s[r]) )
            {
                left = l;
                right = r;
                l--;
                r++;
            }

            if(right-left+1 > max_length)
            {
                max_length = right-left+1;
                sub_s = s.substr(left,right-left+1);
            }
        }

        return sub_s;
    }
};