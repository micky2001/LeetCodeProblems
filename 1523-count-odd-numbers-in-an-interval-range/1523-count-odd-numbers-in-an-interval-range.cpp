class Solution {
public:
    int countOdds(int low, int high) {
        int count=1;
        
        if(low%2==0 && high%2==0)
            count=0;

        count+=(high-low)/2;
       
        return count;
    }
};