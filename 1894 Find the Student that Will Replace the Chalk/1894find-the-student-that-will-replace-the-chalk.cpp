class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int i =0;

        long long sum = accumulate(chalk.begin(), chalk.end(), 0LL);
        int k1 = k%sum;

        while(k1 >= chalk[i])
        {
            k1 -= chalk[i];

            //Increment i
            if(i == (chalk.size() - 1))
            {
                i = 0;
            }
            else 
            {
                i++;
            }
        }

        return i;
    }
};