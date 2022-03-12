class Solution {
public:
    int sqr(int n)
    {
        if((n/10) != 0)
        {
            int num=0;
            while(n>0)
            {
                int rem=n%10;
                num+=pow(rem,2);
                n/=10;
            }
            return sqr(num);
        }
        return n;
    }
    bool isHappy(int n) {
        int ans = sqr(n);
        
        if(ans==1 || ans==7)
            return true;
        return false;
    }
};