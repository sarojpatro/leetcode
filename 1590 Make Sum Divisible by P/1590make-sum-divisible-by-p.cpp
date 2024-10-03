class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int need_to_remove = 0;
        for(int n: nums)
        {
            need_to_remove = (need_to_remove + n)%p;
        }

        if(need_to_remove == 0) return 0;
        

        // lets find subarry
        map<int, int> m;
        int sum = 0; int res = nums.size();
        m[0] = -1;
        for(int i=0; i< nums.size(); i++)
        {
            sum = (sum + nums[i]) % p;
            m[sum] = i;

            int rest = (sum - need_to_remove + p) % p;
            if(m.find(rest) != m.end()) res = min(res, i-m[rest]);
        }

        return res >= nums.size() ? -1: res;

    }
};