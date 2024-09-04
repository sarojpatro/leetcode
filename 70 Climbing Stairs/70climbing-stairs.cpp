class Solution {
public:
    int climbStairs(int n) {

        if (n <= 2)
        {
            return n;
        }
        vector<int> attempts(n+1);
        attempts[0] = 0;
        attempts[1] = 1;
        attempts[2] = 2;
        
        for (int i = 3 ; i <= n ; i++)
        {
            attempts[i] = attempts[i-1] + attempts[i-2];
            cout << attempts[i] << endl;
        }

        return attempts[n];
        
    }
};