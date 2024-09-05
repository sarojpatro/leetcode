class Solution {
public:
    int rob(vector<int>& nums) {

        int s = nums.size();
        if(s == 0 ) return 0;
        if(s == 1) return nums[0];
        if(s == 2) return max(nums[0], nums[1]);
        
        vector<int> a(nums.size(), 0);
        a[0] = nums[0];
        a[1] = max(nums[0], nums[1]);
        
        int m = 0;
        for(int i=2; i<nums.size();i++)
        {
            a[i] = max(a[i-2]+nums[i], a[i-1]);
            m = max(m, a[i]);
        }
        
        return m;
    }
};