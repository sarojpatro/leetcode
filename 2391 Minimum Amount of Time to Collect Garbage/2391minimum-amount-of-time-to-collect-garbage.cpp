class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int count = 0;
        std::map<char, int> last;
        std::vector<int> accum_travel(garbage.size());
        for(int i=0; i<garbage.size(); i++) 
        {
            for (auto c: garbage[i])
            {
                count += 1;
                last[c] = i;
            }

            if(i == 0)
            {
                accum_travel[i] = 0;
            }
            else
            {
                accum_travel[i] = accum_travel[i-1] + travel[i-1];
            }
        }

        return count + accum_travel[last['M']] + accum_travel[last['P']] + accum_travel[last['G']];
    }
};