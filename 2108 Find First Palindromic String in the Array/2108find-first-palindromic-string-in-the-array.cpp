class Solution {
public:
    bool isPalindrome(string &s)
    {
        string t=s;
        reverse(t.begin(), t.end());

        return t == s;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto& w: words)
        {
            if(isPalindrome(w))
            {
                return w;
            }
        }

        return "";
    }
};