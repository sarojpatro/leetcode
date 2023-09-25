class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t sum = 0;
        while(n != 0)
        {
            if(n %2 == 1)
            {
                sum += 1;
            }
            n = n/2;
        }

        return sum;
    }
};