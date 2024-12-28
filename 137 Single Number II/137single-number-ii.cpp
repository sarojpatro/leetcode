class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0;
        int twos = 0;
        for(int num : nums)
        {
            ones ^= num & ~twos;
            twos ^= num & ~ones;

            //cout << "ones : " << ones << endl;
            //cout << "twos : " << twos << endl;
        }

        return ones;
    }
};