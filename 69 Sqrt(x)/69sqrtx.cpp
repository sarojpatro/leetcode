class Solution {
public:
    int mySqrt(int x) {
        if( x == 0)
        {
            return 0;
        }
        if ( x == 1)
        {
            return 1;
        }

        int startpt = 1;
        int endpt = x;

        while(endpt >= startpt)
        {
            int midpt = startpt + (endpt - startpt) / 2;
            if(midpt == x/midpt)
            {
                return midpt;
            }
            else if(midpt < x/midpt)
            {
                startpt = midpt + 1;
            }
            else
            {
                endpt = midpt - 1;
            }
        }

        return endpt;
 
    }
};