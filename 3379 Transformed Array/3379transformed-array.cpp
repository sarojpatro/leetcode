class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        //if +ve then move right
        //always move from the 0th index
        // use module operator to find the index
        // for -ve convert them to positive first

        vector<int> result(nums.size(), 0);
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] > 0) 
            {
                // get the module relative to the begin()
                int j = (nums[i] + i ) % nums.size();
                result[i] = nums[j];
            }
            else if(nums[i] < 0)
            {
                int val = nums[i];
                while(val < 0)
                {
                    val = nums.size() + val;                    
                }
                int j = i + val;
                j %= nums.size();
                result[i] = nums[j];
            }
            else
            {
                result[i] = nums[i];
            }
        }

        return result;
    }
};