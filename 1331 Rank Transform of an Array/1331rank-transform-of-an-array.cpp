class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() == 0) return vector<int>();

        vector<int> temp = arr; 
        sort(temp.begin(), temp.end());
        unordered_map <int, int> m;
        int i=1;
        for(auto& t: temp)
        {
            if(m.find(t) == m.end())
            {
                m[t] = i;
                i++;
            }
            
        }

        for(int& a: arr)
        {
            a = m[a];
        }

        return arr;
    }
};