class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int i = edges[0][0];
        int j = edges[0][1];
        int k = edges[1][0];
        int l = edges[1][1];

        if(i == k || i == l) return i;
        if(j == k || j == l) return j;

        return -1;
    }
};