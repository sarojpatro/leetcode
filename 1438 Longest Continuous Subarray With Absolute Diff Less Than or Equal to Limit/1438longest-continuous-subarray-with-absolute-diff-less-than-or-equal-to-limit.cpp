class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int rc = 0;
        if(nums.size() == 1) return rc + 1;
        int i=0, j=1;
        int max = nums[i] > nums[j] ? nums[i] : nums[j];
        int min = nums[i] < nums[j] ? nums[i] : nums[j];

        while(i < j )
        {
            if(j == nums.size()) break;
            
            //Start with 2 digits
            //If it satisfies then reassign the rc and move the j
            //If it does not then move the i
            //cout << "i = "<< i << " j= " << j << " max:" << max << " min: " << min;
            if ((max-min) <= limit)
            {
                rc = std::max(j-i, rc);
                //cout << " rc=" << rc<< endl;
                j++;
                if(j == nums.size()) break;
                max = std::max(max, nums[j]);
                min = std::min(min, nums[j]);
            }
            else
            {
                //cout << " nc rc=" << rc<< endl;
                i++; if(i == nums.size()) break;
                j++; if(j == nums.size()) break;
                auto itmx = std::min_max(nums.begin()+i, nums.begin()+j + 1);
                auto itmn = std::min_element(nums.begin()+i, nums.begin()+j + 1);
                max = *itmx;
                min = *itmn;
            }
            
        }

        return rc + 1;
    }
};