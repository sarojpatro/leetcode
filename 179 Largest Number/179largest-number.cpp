class Solution {
public:
    static bool compareF(const int& a, const int& b)
    {
        if(a==b) return false;
        string s1 = to_string(a);
        string s2 = to_string(b);

        return s1+s2 > s2+s1;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compareF);

        if(nums[0] == 0) return "0";

        string ans;
        for(auto& num:nums)
        {
            ans += to_string(num);
        }

        return ans;
    }
};