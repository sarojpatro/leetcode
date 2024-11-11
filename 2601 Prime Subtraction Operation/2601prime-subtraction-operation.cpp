class Solution {
public:
    int GetPrime(int cur=0)
    {
        if(cur == 0) return 2;
        if(cur == 1) return 2;
        for(int i=cur+1; ;i++)
        {
            for(int j=2; j<i; j++)
            {
                if(i%j == 0) break;
                if(j == i-1) return i;
            }
        }

        return -1; // Should never happen
    }

    bool primeSubOperation(vector<int>& nums) {
        int pp = 0;

        for(int i=0; i<nums.size(); i++)
        {
            int sp = 0;
            int pr = 2;
            int temp = nums[i];
            while(nums[i] - pr> pp)
            {
                sp = pr;
                pr = GetPrime(sp);
            }
            nums[i] -= sp;

            if(nums[i]  > pp)
            {
                pp = nums[i];
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};