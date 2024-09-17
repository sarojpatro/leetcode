class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, pair<int, int>> m;
        for(string s: words1)
        {
            m[s].first += 1;
        }
        for(string s: words2)
        {
            m[s].second += 1;
        }

        int count = 0;
        for(auto& a: m)
        {
            if(a.second.first == a.second.second && a.second.first == 1) count++;
        }

        return count;
    }
};