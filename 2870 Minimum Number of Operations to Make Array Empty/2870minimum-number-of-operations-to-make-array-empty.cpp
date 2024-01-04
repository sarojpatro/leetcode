class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> map_nums;
        for(auto& n: nums)
        {
            {
                map_nums[n] += 1;
            }
        }

        int total_no_of_ops = 0;
        for (auto& n: map_nums)
        {
            int freq = n.second;
            if(freq == 1)
            {
                return -1;
            }
            else if(freq % 3 == 0)
            {
                total_no_of_ops += freq/3;
            }
            else if((freq - 1) % 3 == 0)
            {
                total_no_of_ops += ((freq-4)/3 + 2);
            }
            else //((n.second - 2) % 3 == 0)
            {
                total_no_of_ops += ((freq-2)/3 + 1);
            }
        }
        return total_no_of_ops;
    }
};