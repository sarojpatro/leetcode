class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long s = 0;
        for(auto& n:nums) s+=n;
        long long f=0;
        int ans = 0;
        for(int i=0; i<nums.size()-1; i++)
        {
            f+=nums[i];
            s-= nums[i];
            //cout << "f = " << f << "s = " << s << endl;
            if(f >= s) ans++;
        }

        return ans;
    }
};