class Solution {
public:
    string compressedString(string word) {
        string ans;
        int count = 1, s = word.size();
        char prev=word[0];
        for(int i=1; i<s;i++)
        {
            char c = word[i];
            if(count < 9 && c == prev)
            {
                count++;
            }
            else
            {
                ans += to_string(count);
                ans += prev;
                count = 1;
                if(c != prev) prev = c;
            }
        }
        ans += to_string(count);
        ans += prev;
        return ans;
    }
};