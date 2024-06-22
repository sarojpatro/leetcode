#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0, prefix = 0, res = 0;
        vector<int> oddCount(nums.size() + 1, 0);
        oddCount[0] = 1; // Base case: one way to have zero odd numbers.

        for (int num : nums) {
            prefix += num % 2;
            res += (prefix >= k) ? oddCount[prefix - k] : 0;
            oddCount[prefix]++;
        }

        return res;
    }
};