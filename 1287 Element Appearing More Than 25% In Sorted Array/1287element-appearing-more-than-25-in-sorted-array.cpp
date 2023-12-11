class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size() == 1)
        {
            return arr[0];
        }

        int ans_size = arr.size()/4;

        int count = 1;
        int prev = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            int current = arr[i];
            if(current == prev)
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if(count > ans_size)
            {
                return arr[i]; 
            }
            prev = current;
        }

        return -1;
    }
};