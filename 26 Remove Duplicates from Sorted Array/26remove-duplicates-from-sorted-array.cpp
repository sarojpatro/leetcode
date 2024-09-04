

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }

        if(nums.size() == 1)
        {
            return 1;
        }

        int unique = 0;
        for(int cur=1;cur<nums.size();cur++)
        {
            if(nums[cur] != nums[unique])    
            {
                int temp = nums[cur];
                nums[cur] = nums[unique+1];
                nums[unique+1] = temp;
                unique +=1;
            }
        }
        return unique+1;
    }
};