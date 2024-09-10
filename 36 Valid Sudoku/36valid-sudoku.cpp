class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> a, b, c;
        char ch;
        for(int i=0; i<9; i++)
        {
            a.clear();
            b.clear();
            c.clear();
            
            for(int j=0; j<9; j++)
            {
                //Check Rows
                ch = board[i][j];
                if(ch != '.') 
                {
                   if(a.find(ch) != a.end()) return false;
                   a.insert(ch);
                }

                //Check Rows
                ch = board[j][i];
                if(ch != '.') 
                {
                   if(b.find(ch) != b.end()) return false;
                   b.insert(ch);
                }

                //Check a box
                ch = board[(i/3)*3 + (j/3)][(i%3)*3 + (j%3)];
                if(ch != '.')
                {
                    if(c.find(ch) != c.end()) return false;
                    c.insert(ch);
                }
            }
        }

        return true;
    }
};