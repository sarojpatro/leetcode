class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> bigJmp;
        int step = 0, gapDiff, n = heights.size(); 
        for( ; step<n-1; step++)
        { 
            gapDiff = heights[step+1]-heights[step];
            if(gapDiff <= 0)
                continue;
            bricks -= gapDiff; 
            bigJmp.push(gapDiff); 
            if(bricks < 0){
                bricks += bigJmp.top(); 
                bigJmp.pop(); 
                ladders--;
            }        
            if(ladders < 0) 
                break;
        }
        return step;
    }
};