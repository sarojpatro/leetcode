class Solution 
{
public:
    map<int, vector<string>> map_result;
    Solution()
    {
        map_result[0] = {"-"};
        map_result[1] = {"()"};
        map_result[2] = {"(())", "()()"};
    }
    vector<string> generateParenthesis(int n) 
    {
        if(map_result.contains(n))
        {
            return map_result[n];
        }

        vector<string> result;
        for(int i=0; i<n; i++)
        {
            for(string v1: generateParenthesis(i))
            {
                for(string v2: generateParenthesis(n-i-1))
                {
                    v1.erase(remove(v1.begin(), v1.end(), '-'), v1.end());
                    v2.erase(remove(v2.begin(), v2.end(), '-'), v2.end());
                    result.push_back('(' + v1 + ')' + v2);
                }
            }
        }
        map_result[n] = result;
        return result;
    }

};
