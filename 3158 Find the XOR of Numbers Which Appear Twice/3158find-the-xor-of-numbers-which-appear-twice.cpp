class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int a = 0;

        return accumulate(nums.begin(), nums.end(), accumulate(s.begin(), s.end(), 0, bit_xor()), bit_xor());
    }
};