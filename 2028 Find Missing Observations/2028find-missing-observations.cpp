class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> ans;
        int s = rolls.size();
        int sum = accumulate(rolls.begin(), rolls.end(), 0);

        int t = (s + n) * mean;
        if((t > (sum + 6*n)) || (t < (sum + n)))
        {
            return ans;
        }

        int r = (t - sum) % n ;
        int d = (t - sum) / n ;

        ans = vector<int>(n, d);
        for(int i=1;i<=r;i++)
        {
            ans[i] += 1;
        }

        return ans;
    }
};
