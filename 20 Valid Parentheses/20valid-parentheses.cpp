class Solution {
public:
    bool isValid(string s) {
        std::stack<char> expression;
        for(int i = 0; i < s.length() ; i++)
        {
            {
                if (expression.size() == 0)
                {
                    expression.push(s[i]);
                }
                else if(s[i] == '(' ||
                s[i] == '{' ||
                s[i] == '[')
                {
                    expression.push(s[i]);
                }
                else if(expression.size() > 0)
                {
                    char cur = expression.top();
                    if(cur == '(' && s[i] == ')' ||
                    cur == '[' && s[i] == ']' ||
                    cur == '{' && s[i] == '}'
                    )
                    {
                        expression.pop();    
                    }
                    else
                    {
                        expression.push(s[i]);    
                    }
                }
            }
        }

        return expression.size() == 0;
    }
};