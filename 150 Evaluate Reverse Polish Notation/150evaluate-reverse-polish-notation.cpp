class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> tokens_st;
        for(auto& s:tokens)
        {
            if(s == "+" || s == "-" || s == "/" || s == "*")
            {
                int b = tokens_st.top(); tokens_st.pop();
                int a = tokens_st.top(); tokens_st.pop();

                if(s == "+") tokens_st.push(a+b);
                if(s == "-") tokens_st.push(a-b);
                if(s == "*") tokens_st.push(a*b);
                if(s == "/") tokens_st.push(a/b);
            }
            else
            {
                tokens_st.push(stoi(s));
            }
        }

        return tokens_st.top();
    }
};