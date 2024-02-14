class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        auto is_positive = [](int i){ return (i > 0);};
        vector<int> ans;
        auto p = nums.begin();
        auto n = nums.begin();
        while(p != nums.end() && n != nums.end())
        {
            if(p != nums.end())
            {
                p = find_if(p, nums.end(), is_positive);
                ans.push_back(*p); p++;
            }
            if(n != nums.end())
            {
                n = find_if_not(n, nums.end(), is_positive);
                ans.push_back(*n); n++;
            }
        }
        return ans;
    }
};