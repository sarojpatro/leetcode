class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int count = 0;
        int i = 1;
        int sum = 0;
        sort(banned.begin(), banned.end());
        auto last = unique(banned.begin(), banned.end());
        banned.erase(last, banned.end());
        vector<int>::iterator it = banned.begin();

        while(i <= n)
        {
            //cout << i;
            if(it != banned.end() && (*it == i)) 
            {
                it++;
                i++;
                continue;
            }
            else
            {
                sum += i;
                if(sum > maxSum) return count;
                i++;
                count++;
            }
        }

        return count;
    }
};