class Solution {
public:
    void print(vector<int> v)
    {
        for(auto& vv : v)
        {
            cout << vv;
        }
        cout << endl;
    }
    vector<int> getMaximumXor(vector<int>& nums, int m) {
        int s = nums.size();
        vector<int> ans(s, 0); int val = 0;
        for(int i=0; i< s; i++)
        {
            val ^= nums[i];
            ans[s-1-i] = val;
        }
        //print(ans);
        cout << m << endl;
        int max = pow(2, m) - 1;
        for(int i=0; i<s; i++)
        {
            ans[i] ^= max;
        }

        return ans;
    }
};