class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0, a=0;
        for(char& c: s)
        {
            if(c == '1') a += 1;
            else ans += a;
        }

        return ans;
    }
};