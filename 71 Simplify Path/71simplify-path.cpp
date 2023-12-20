class Solution {
public:
    string simplifyPath(string path) {

        stack<string> st;
        for(int i=0; i<path.size(); ++i)
        {
            if(path[i] == '/')
                continue;
            string temp;
            while(i < path.size() && path[i] != '/')
            {
                temp += path[i];
                ++i;
            }

            if(temp == ".")
            {
                continue;
            }

            if(temp == ".." && st.size()!= 0)
            {
                st.pop();
            }
            else if (temp != "..")
            {
                st.push(temp);
            }

        }

        if(st.empty())
        {
            return "/";
        }
        
        string result;
        while(!st.empty())
        {
            result = "/" + st.top() + result;
            st.pop();
        }

        return result;
    }
};