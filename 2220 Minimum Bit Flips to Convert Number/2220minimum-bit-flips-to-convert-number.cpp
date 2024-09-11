class Solution {
public:
    int minBitFlips(int start, int goal) {

        long long x = start ^ goal;
        int n = 0;
        while(x > 0)
        {
            if(1&x) n++;
            x >>= 1;
        }

        return n;
    }
};