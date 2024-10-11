class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        
        int width = 0, s = nums.size();
        for(int i=0; i < s-1; i++)
        {
            int j = s-1;
            while(j-i>width)
            {
                if(nums[j] >= nums[i]) 
                {
                    width = max(width, j-i);
                    break;
                }
                j--;
            }
        }

        return width;
    }
};