class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carryover = 0;
        vector<int>::iterator iter = digits.end();
        while(iter != digits.begin())
        {
            iter--;
            int val = *iter;
            if((iter + 1) == digits.end())
            {
                val = val + 1;
            }

            val = val + carryover;
            val >= 10 ? carryover = 1: carryover = 0;
            *iter = val % 10;
        }

        if(carryover == 1)
        {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};