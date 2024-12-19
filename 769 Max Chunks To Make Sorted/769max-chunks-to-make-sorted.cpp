class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int start = 0;
        int chunks = 1;
        for(int i=0; i<arr.size() - 1; i++)
        {
            int max = *max_element(arr.begin(), arr.begin()+ i + 1);
            int min = *min_element(arr.begin() + i + 1, arr.end());

            if(max < min) chunks++;
        }

        return chunks;
    }
};