class Solution {
public:
    long long l = 0;
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        long long sum = 0;
        for(int j = 0; j< nums.size(); j++)
        {
            sum += nums[j];
        }

        for(int i=0; i < nums.size()-2; i++)
        {
            sum = sum - nums[i];
            if(sum > nums[i])
            {
                return sum + nums[i];
            }
        }

        return -1;
    }
};