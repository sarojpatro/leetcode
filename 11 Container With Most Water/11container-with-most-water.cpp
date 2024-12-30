class Solution {
public:
    int maxArea(vector<int>& height) {
        int a =0;
        int i = 0, j = height.size()-1;
        while(i<j)
        {
            a = max(a, min(height[j], height[i]) * (j-i));
            if(height[i] <= height[j]) i++;
            else j--;
        }

        return a;
    }
};