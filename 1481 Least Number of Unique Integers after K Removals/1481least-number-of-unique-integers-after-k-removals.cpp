bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

class Solution {
public:

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        map<int , int> unique_nos;
        for (int i : arr)
        {
            unique_nos[i] += 1;
        }

        vector<int> values;
        for(auto p: unique_nos)
        {
            values.push_back(p.second);
        }

        sort(values.begin(), values.end());

        int s  = values.size();
        int r = s;
        for(int i=0; i  < s; i++)
        {
            if(k >= values[i])
            {
                k -= values[i];
                r -= 1;
            }
            else if(k < values[i])
            {
                return r;
            }
        }




        return r;
    }
};