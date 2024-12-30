class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int i=0,j = k-1;
        double s = 0;
        for(int a =0; a<=j; a++) s+=nums[a];
        int sz = nums.size();
        while(j<sz)
        {
            sum = max(sum, s);
            s -= nums[i];
            i++; j++;
            if(j<sz) s += nums[j];
        }


        return sum/k;
    }
};