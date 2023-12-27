class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int minimumCost=0;
        for (int i=1; i<neededTime.size();i++)
        {
            if(colors[i] == colors[i-1])
            {
                minimumCost += min(neededTime[i], neededTime[i-1]);
                if(neededTime[i] < neededTime[i-1])
                {
                    // We need to update the i the with the i-1
                    neededTime[i] = neededTime[i-1];
                    colors[i] = colors[i-1];
                }
            }
        }

        return minimumCost;
    }
};