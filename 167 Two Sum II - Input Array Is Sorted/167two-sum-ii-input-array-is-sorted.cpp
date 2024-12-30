class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size()-1;

        while(i<j)
        {
            int s = numbers[i] + numbers[j];
            if(s == target) break;
            else if(s > target) j--;
            else i++;
        }

        vector<int> ans{i+1, j+1};
        return ans;
    }
};