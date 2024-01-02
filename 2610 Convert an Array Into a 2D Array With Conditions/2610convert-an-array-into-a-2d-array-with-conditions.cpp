class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        //num and freq
        unordered_map<int, int> num_freq;
        int max_freq = 0;
        for(auto& i: nums)
        {
            num_freq[i] += 1;
            max_freq = max(max_freq, num_freq[i]);
        }

        //Create the vector
        vector<vector<int>> matrix_vector(max_freq);
        for(auto& a: num_freq)
        {
            int num = a.first;
            int freq = a.second;
            for(int i=0; i<freq; i++)
            {
                matrix_vector[i].push_back(num);
            }
        }

        return matrix_vector;
    }
};