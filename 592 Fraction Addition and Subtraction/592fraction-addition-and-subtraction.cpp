class Solution {
public:
    string fractionAddition(string expression) {

        int numerator = 0;
        int denominator = 1;
        for(int i=0; i<expression.size(); i++)
        {
            int sign = 1;
            if(expression[i] == '+' || expression[i] == '-')
            {
                if(expression[i] == '-')
                {
                    sign =  -1;
                }
                i++;
            }

            int n=0;
            while(isdigit(expression[i]))
            {
                n = n*10 + (expression[i] - '0');
                i++;
            }
            n*=sign;

            //expression '/'
            i++;

            int d=0;
            while(isdigit(expression[i]))
            {
                d = d*10 + (expression[i] - '0');
                i++;
            }
            i--; // Go back to the previous pointer

            //if(sign == 1)
            //   cout << "n is : " <<n << " d is : "<<d <<endl;
            //else
            //    cout << "n is : " <<"-"<<n << " d is : "<<d <<endl;

            //Create the new numerator and denominator
            numerator = numerator * d + denominator * n;
            denominator = denominator * d;
        }
        
        int g = gcd(numerator, denominator);
        numerator /= g;
        denominator /= g;
        return to_string(numerator) + "/" + to_string(denominator);

    }
};