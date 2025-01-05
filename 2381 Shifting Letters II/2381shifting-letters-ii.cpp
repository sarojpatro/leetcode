class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n+1, 0);

        for(auto a: shifts)
        {
            if(a[2] == 0)
            {
                diff[a[0]]--;
                diff[a[1]+1]++;
            }
            else
            {
                diff[a[0]]++;
                diff[a[1]+1]--;
            }
        }

        int change = 0;
        for(int i=0; i<n;i++)
        {
            change += diff[i];
            int final_change = (((s[i]-'a')+change) % 26 + 26);
            s[i] = 'a' + ((final_change) %26); 
        }

        return s;
    }
};