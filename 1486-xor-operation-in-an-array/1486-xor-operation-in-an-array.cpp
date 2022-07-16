class Solution {
public:
    int xorOperation(int n, int start) {
        int xorn = 0;
        
        for(int i=0;i<n;i++)
        {
            xorn ^= (start + 2*i);
        }
        
        return xorn;
    }
};