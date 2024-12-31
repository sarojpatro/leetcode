class Solution {
public:
    int getSumOfSquares(int n)
    {
        //cout << "n " << n;
        int sum=0;
        while(n/10 != 0)
        {   
            int a = n%10;
            sum += (a*a);
            n/=10;
        }

        sum += (n*n);
        //cout << " sum " << sum << endl;
        return sum;
    }

    bool isHappy(int n) {
        int fast = getSumOfSquares(getSumOfSquares(n)); 
        int slow = getSumOfSquares(n);

        if(slow == 1) return true;
        while(fast != slow)
        {
            slow = getSumOfSquares(slow);
            if(slow == 1) return true;
            fast = getSumOfSquares(getSumOfSquares(fast));
        }

        return false;
    }
};