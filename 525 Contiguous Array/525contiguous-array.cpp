class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n);
        p[0] = (nums[0] == 1 ? 1:-1);
        //cout << p[0] << " " ;
        map<int, vector<int>> m;
        int prev = 0;
        for(int i=0; i<n; i++)
        {
            int cur;
            if(nums[i] == 1)
            {
                cur = prev + 1;
            } 
            else
            {
                cur = prev - 1;
            }

            prev = cur;
            m[cur].push_back(i);
        }

        int mx = 0;
        
        for(auto a : m)
        {
            if(a.first == 0 || a.second.size() > 1)
            {
                int s = a.second.size();
                //cout << a.first << " " << a.second[a.second.size()-1] << " " << a.second[0] << endl;
                if(a.first == 0) mx = max(mx, a.second[s-1] + 1);
                else
                {
                    mx = max(mx, a.second[s-1] - a.second[0]);
                }
            }
        }

        return mx;
    }
};