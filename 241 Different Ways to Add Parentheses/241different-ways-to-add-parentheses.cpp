class Solution {
public:
    int compute(int a, int b, char ex)
    {
        if(ex == '-') return a-b;
        if(ex == '+') return a+b;
        if(ex == '*') return a*b;

        return 0;
    }
    vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;
        for(int i=0; i<expression.size(); i++)
        {
            
            if(!isdigit(expression[i]))
            {
                //cout << "calling the for loop " <<expression << endl;
                vector<int> left = diffWaysToCompute(expression.substr(0, i));
                vector<int> right  = diffWaysToCompute(expression.substr(i+1));

                //Now we need to compute
                for( int x: left)
                    for(int y: right)
                    {
                        //cout << "calling " << endl;
                        int a = compute(x, y, expression[i]);
                        ans.push_back(a);
                    }
            }
        }

        if (ans.empty()) {
            cout << "pushing this : " << expression << endl;
            ans.push_back(atoi(expression.c_str()));
        }


        return ans;
    }
};