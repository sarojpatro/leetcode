class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int m=-1; int s = nums.size();
        for(int i=0; i<s; i++)
        {
            int j;
            for(j=i+1; j<s; j++)
            {
                if(nums[j] - nums[i] > (2*k)) break;
            }

            m = max(m, j-i);
        }

        return m;
    }
};