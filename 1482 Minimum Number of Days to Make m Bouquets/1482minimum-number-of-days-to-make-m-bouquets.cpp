class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        if (static_cast<long long>(m) * k > bloomDay.size()) return -1;

        int mx = 1e9; 
        int mn = 1;   

        
        while(mn < mx)
        {
            int mid = (mx + mn ) / 2;
            if(isDayOk(bloomDay, mid, m, k))
            {
                mx = mid;
            }
            else
            {
                mn = mid + 1;
            }
        }

        return mn;
    }


    bool isDayOk(vector<int> bD, int d, int m, int k)
    {
        int cc = 0;
        for(int i=0; i<bD.size(); i++)
        {
            if(bD[i] <= d) 
            {
                cc++;
                if(cc == k) 
                {
                    cc = 0; m--;
                    
                    if(m == 0)
                        return true;
                }
            }
            else
            {
                cc = 0;
            }

        }

        return false;        
    }
};