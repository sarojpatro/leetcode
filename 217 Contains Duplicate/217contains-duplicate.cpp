class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> nums_set;
        for (int i = 0; i < nums.size(); i++)
        {
            nums_set.insert(nums[i]);
        }

        return nums.size() != nums_set.size();
    }
};