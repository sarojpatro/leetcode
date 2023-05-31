class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        bool found = false;
        
        if(target < nums[start])
        {
            return 0;
        }
        else if (target > nums[end])
        {
            return end + 1;
        }
        else
        {
            int mid = (start+end)/2;
            while (start <= end)
            {
                if(target == nums[mid])
                {
                    return mid;
                }
                else if(target < nums[mid])
                {
                    end = mid - 1;
                }
                else if(target > nums[mid])
                {
                    start = mid + 1;
                }
                mid = (start+end)/2;
            }

            return mid + 1;
        }
    }
};