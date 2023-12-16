class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {

        int n = words.size();
        if(n == 0 || n == 1)
        {
            return words;
        }

        string prev_s = "";
        for (auto iter=words.begin();iter!=words.end();)
        {
            string word_s = *iter;
            sort(word_s.begin(), word_s.end());
            if(word_s == prev_s)
            {
                words.erase(iter);
            }
            else
            {
                prev_s = word_s;
                iter++;
            }
        }

        return words;

    }
};