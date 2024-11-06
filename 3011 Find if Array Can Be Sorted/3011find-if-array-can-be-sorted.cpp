class Solution {
public:
    int Bits(int i)
    {
        int ans = 0;
        while (i > 0)
        {
            if (i & 1 == 1) ans++;
            i = i >> 1;
        }

        return ans;
    }
    bool canSortArray(vector<int>& nums) {
        int phigh = INT_MIN, plow = INT_MAX;
        int chigh = INT_MIN, clow = INT_MAX;
        int num = Bits(nums[0]);
        for(int i=0; i< nums.size(); i++)
        {
            if(num == Bits(nums[i]))
            {
                chigh = max(chigh, nums[i]);
                clow = min(clow, nums[i]);
                //cout << "ch " << chigh << "cl" << clow << endl;
            }
            else
            {
                //cout << "phigh " << phigh << " clow " << clow << endl;
                if(phigh > clow) return false;
                phigh = chigh;
                plow = clow;
                num = Bits(nums[i]);
                chigh = nums[i];
                clow = nums[i];
            }
        }

        if(phigh > clow) return false;

        return true;
    }
};