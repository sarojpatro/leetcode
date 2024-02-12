class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(int& num: nums)
        {
            m[num] += 1;
        }

        int s = nums.size();
        for(pair p: m)
        {
            if(p.second > (s/2))
            {
                return p.first;
            }
        }

        return -1;
    }
};