class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int min_moves = 0;

        for (int i=1; i<nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                nums[i] += 1;
                min_moves += 1;
            }
            else if(nums[i-1] > nums[i] )
            {
                min_moves += (nums[i-1] + 1 - nums[i]);
                nums[i] = nums[i-1] + 1;
            }
        }

        return min_moves;
    }
};