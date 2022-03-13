class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
     int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        
        int diffY = y2-y1;
        int diffX = x2-x1;
        
        for(int i=0;i<coordinates.size()-1;i++)
        {
             int cY1 = coordinates[i][1];
            int cY2 = coordinates[i+1][1];
            int cX1=coordinates[i][0];
            int cX2 = coordinates[i+1][0];
            
            if(diffY*(cX2-cX1)!=diffX*(cY2-cY1))
                return false;
        }
        return true;
    }
};