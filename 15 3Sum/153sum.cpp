class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0; 
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        while(i < nums.size())
        {
            int t = -nums[i];
            int j = i+1, k=nums.size()-1;
            while(j<k)
            {
                int s = nums[j] + nums[k];
                if(s == t) 
                {
                    vector<int> a{-t, nums[j], nums[k]};
                    ans.push_back(a);
                    while(j<k && nums[j]==a[1]) j++;
                    while(j<k && nums[k]==a[2]) k--;
                }
                else if(s > t) k--;
                else j++;
            }

            while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
            i++;

        }

        return ans;
    }
};