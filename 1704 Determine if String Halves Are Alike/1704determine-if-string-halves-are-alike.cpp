class Solution {
public:
    bool halvesAreAlike(string s) {

        int no=0;
        string vowels = "aeiou";
        int c = s.size();
        for(int i=0; i< c/2 ; i++)
        {
            if(vowels.find(std::tolower(s[i])) != string::npos)
            {
                no++;
            }
            if(vowels.find(std::tolower(s[c/2 + i])) != string::npos)
            {
                no--;
            }
        }

        return no == 0;
    }
};