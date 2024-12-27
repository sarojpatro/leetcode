class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int maxScore = -1;
        vector<int> ml(values.size(), values[0]);


        for(int i=1; i<values.size(); i++)
        {
            int cls = values[i]+i;
            int crs = values[i]-i;
            maxScore = max(maxScore, crs + ml[i-1]);
            ml[i] = max(ml[i-1], cls);
        }

        return maxScore;
    }
};