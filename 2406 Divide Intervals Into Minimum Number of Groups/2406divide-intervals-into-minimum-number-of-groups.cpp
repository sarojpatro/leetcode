class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int s=INT_MAX, e=INT_MIN;
        for(auto&  a : intervals)
        {
            s = min(s, a[0]);
            e = max(e, a[1]);
        }

        vector<int> arr(e+2);
        int ans = 0;

        for(auto& a: intervals)
        {
            arr[a[0]]++;
            arr[a[1]+1]--;
        }

        int sum=0;
        for(auto& a:arr)
        {
            //cout << a << " " ;
            sum += a;
            ans =  max(ans, sum);
        }

        return ans;


    }
};