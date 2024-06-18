class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        //Create a map of m[profit] = difficulty
        map<int, int, greater<int>> p_d;
        for(int i=0;i<difficulty.size(); i++)
        { 
            if (p_d.count(profit[i]) == 0)
                p_d[profit[i]] = difficulty[i];
            else
                if(p_d[profit[i]] > difficulty[i])
                    p_d[profit[i]] = difficulty[i];

        }

        int mProfit = 0;
        sort(worker.begin(), worker.end(), greater<int>());
        for(auto& w : worker)
        {
            for(auto it = p_d.begin(); it != p_d.end();)
            {
                if (it->second > w)
                {
                    p_d.erase(it);
                    ++it; 
                }
                else
                {
                    mProfit += it->first;
                    //cout << "w: " << w << " Profit: " << it->first << endl;
                    break;
                }
            }
        }

        return mProfit;
    }
};