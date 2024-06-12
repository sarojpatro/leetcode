class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros =0, ones = 0, twos=0;

        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==0) zeros+=1;
            else if(nums[i]==1) ones+=1;
            else if(nums[i]==2) twos+=1;
        }

        for(int i=0; i<nums.size();i++)
        {
            if(zeros != 0) { nums[i] = 0; zeros -= 1;}
            else if(ones != 0) { nums[i] = 1; ones -= 1;}
            else if(twos != 0) { nums[i] = 2; twos -= 1;}
        }
    }
};