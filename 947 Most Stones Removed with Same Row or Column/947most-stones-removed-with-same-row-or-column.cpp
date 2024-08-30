class Solution {
public:
    void dfs(int index, vector<vector<int>>& stones, vector<int>& visited, int s)
    {
        visited[index] = 1;

        //cout << "index is: " << index << endl;
        for(int i=0; i<s;i++)
        {
            if((visited[i] == 0) && ((stones[index][0] == stones[i][0]) ||
            (stones[index][1] == stones[i][1])))
            {
                dfs(i, stones, visited, s);
            }
        }
    }


    int removeStones(vector<vector<int>>& stones) {

        int s = stones.size();
        int n = 0; // no of groups
        vector<int> visited(s, 0);

        for (int i = 0; i < s; i++) {
            if (visited[i] == 1) continue;
            dfs(i, stones, visited, s);
            n++;
        }

        return s - n;
    }
};