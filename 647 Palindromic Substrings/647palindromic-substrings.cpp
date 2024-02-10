class Solution {
public:
    unordered_map<string, int> palindrome_map;
    int isPalindrome(string s)
    {
        if(palindrome_map.count(s) == 1)
        {
            return palindrome_map[s];
        }

        if(s.size() == 1)
        {
            palindrome_map[s] = 1;
            return 1;
        }
            

        int z = s.size();
       
        for(int i=0, c=z-1; i<=c ; i++,c--)
        {
            if(s[i] != s[c])
            {
                palindrome_map[s] = 0;
                return 0;
            }
        }
        
        palindrome_map[s] = 1;
        return 1;
    }
    int countSubstrings(string s) {
        int total_no =0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i; j<s.size();j++)
            {
                total_no += isPalindrome(s.substr(i,j-i+1));
            }
        }

        return total_no;
    }
};