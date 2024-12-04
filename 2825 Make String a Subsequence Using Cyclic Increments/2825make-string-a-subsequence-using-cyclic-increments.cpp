class Solution {
public:
    bool found(string str1, string str2)
    {
        int start = 0;
        for(int j=0; j<str2.size(); j++)
        {
            char c = str2[j];
            int s = str1.size();
            if(start == s ) return false;
            for(int i=start; i<s; i++)
            {
                //cout << "c : " << c << " str1[i] : " << str1[i] << endl;
                char d = str1[i];
                if(c == d || c == (d + 1) || (c=='a' && d=='z'))
                {
                    start = i+1;
                    break;
                }
                else if(i == s-1)
                {
                    return false;
                }
            }

        }

        return true;
    }

    bool canMakeSubsequence(string str1, string str2) {
        //We increment the str1 for all the characters
        return found(str1, str2);
    }
};