class NumArray {
public:
    vector<int> n;
    NumArray(vector<int>& nums) {
        int prev = 0;
        for(int i=1; i<nums.size(); i++)
        {
            nums[i] += nums[i-1];
        }
        n = nums;
    }
    
    int sumRange(int left, int right) {
        if(left != 0) return n[right] - n[left-1];
        return n[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */