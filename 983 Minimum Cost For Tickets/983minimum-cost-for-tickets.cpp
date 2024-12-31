class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int s = days.size();
        map<int, int> dp;

        for(int i=1; i<=days[s-1]; i++)
        {
            if(days.end() != find(days.begin(), days.end(), i))
            {
                if(i >= 30)
                    dp[i] = min(dp[i-1]+costs[0], min(dp[i-7] + costs[1], dp[i-30] + costs[2]));
                else if(i>=7)
                    dp[i] = min(dp[i-1]+costs[0], min(dp[i-7] + costs[1], costs[2]));
                else
                    dp[i] = min(dp[i-1]+costs[0], min(costs[1], costs[2]));
            }
            else
                dp[i] = dp[i-1];
        }

        return dp[days[s-1]];
    }
};