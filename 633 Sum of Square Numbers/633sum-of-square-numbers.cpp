class Solution {
public:
    bool judgeSquareSum(int c) {
        double  a = sqrt(c);

        double b = 0, d = (int)a; 
        while(b<=a && d>=0)
        {
            //cout << "b = " << b << "d= " << d << "c= " << c;
            double e = (b*b) + (d*d);
            if(e == c)
            {
                return true;
            }
            else if (e < c )
            {
                b++;
            }
            else if ( e > c)
            {
                d--;
            }
        }

        return false;
    }
};