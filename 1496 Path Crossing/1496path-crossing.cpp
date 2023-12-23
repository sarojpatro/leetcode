class Solution {
public:
    bool isPathCrossing(string path) {
        map<int, set<int>> pos{{0, {0}}};
        int posx=0, posy=0;
        for(auto& dir: path)
        {
            if(dir == 'N')
            {
                posy += 1;
            }
            else if (dir == 'S')
            {
                posy -= 1;
            }
            else if (dir == 'E' )
            {
                posx += 1;
            }
            else if (dir == 'W')
            {
                posx -= 1;
            }

            if (pos.count(posx) == 1 && pos[posx].count(posy) == 1)
            {
                return true;
            }

            pos[posx].insert(posy);

        }

        return false;
        
    }
};