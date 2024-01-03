class Solution {
public:

    int ones(string s)
    {
        int count = 0;
        for(auto& c: s)
        {
            if(c == '1')
            {
                count += 1;
            }
        }

        return count;
    }
    int numberOfBeams(vector<string>& bank) {
        int count = 0;
        int bank_s = bank.size();
        for(int i=0; i<bank_s; i++)
        {
            string bank_i = bank[i];
            if(ones(bank_i) > 0)
            {
                //Start the other loop to find the min possible row where ..
                for(int j=i+1; j<bank_s;j++)
                {
                    string bank_j = bank[j];
                    if(ones(bank_j) > 0)
                    {
                        count += ones(bank_i) * ones(bank_j);
                        i = j - 1;
                        break;
                    }
                }
            }
        }

        return count;
    }
};