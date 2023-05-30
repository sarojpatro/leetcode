class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;

        if(nums.size() == 0)
        {
            return 0;
        }

        for(int i = 0; i < nums.size() ; i++)
        {
            if(nums[i] != val)
            {   
                int temp = nums[i];
                nums[i] = nums[count];
                nums[count] = temp;
                count++;
            }
        }
        return count;
    }
};