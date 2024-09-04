class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int xpos =0;
        int ypos =0;
        int xdir =0;
        int ydir =1;
        int max = 0;

        unordered_set<string> os;
        for(vector<int> v:obstacles)
        {
            os.insert(to_string(v[0]) + "," + to_string(v[1]));
        }

        for(int c : commands)
        {
            if(c == -1)
            {
                if(ydir == 1) {xdir = 1; ydir = 0;}
                else if(ydir == -1) {xdir = -1; ydir =0;}
                else if(xdir == 1) {xdir = 0; ydir = -1;}
                else if(xdir == -1) {xdir = 0; ydir =1;}
            }
            else if(c == -2)
            {
                if(ydir == 1) {xdir = -1; ydir = 0;}
                else if(ydir == -1) {xdir = 1; ydir =0;}
                else if(xdir == 1) {xdir = 0; ydir = 1;}
                else if(xdir == -1) {xdir = 0; ydir =-1;}
            }
            else
            {
                for(int i=0; i<c;i++)
                {
                    int xtemp = xpos + xdir;
                    int ytemp = ypos + ydir;
                
                    if(os.find(to_string(xtemp)+"," + to_string(ytemp)) != os.end()) break;

                    xpos = xtemp;
                    ypos = ytemp;
                }

                int dist = xpos*xpos + ypos*ypos;
                max = (max > dist) ? max : dist;

            }

        }

        return max;
    }
};