class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices);
        int s = prices.size();
        for(int i=0; i<s; i++)
        {
            for(int j=i+1; j<s; j++)
            {
                if(prices[j] <= prices[i])
                {
                    ans[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
 
        return ans;
    }
};