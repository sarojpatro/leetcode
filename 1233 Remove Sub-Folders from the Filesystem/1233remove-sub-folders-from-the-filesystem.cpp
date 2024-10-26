class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> ans;

        ans.push_back(folder[0]);
        string b = ans[0];

        for(int i=1; i<folder.size(); i++)
        {
            string a = b + '/';
            if(folder[i].find(a) == 0) continue;
            ans.push_back(folder[i]);
            b = folder[i];
        }

        return ans;
    }

        
};