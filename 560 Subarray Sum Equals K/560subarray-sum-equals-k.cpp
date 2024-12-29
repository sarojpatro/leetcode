class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        map<int, int> m;
        int ans = 0;
        m[sum] = 1;
        for(auto& a : nums)
        {
            sum += a;
            if(m.find(sum-k) != m.end())
            {
                ans += m[sum-k];
            }

            m[sum]++;
        }

        return ans;
    }
};