int factors(int n)
{ int i,factor=0;
 int sum=0;
    for(  i=1;i*i< n;i++){
        if(n%i==0){
           factor=factor+2; 
            sum=sum+i+n/i;
        }
    }
    if(i*i==n) factor++;
 if(factor==4) return sum;
 return 0;
}


class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+factors( nums[i]);
        }
        return ans;
    }
};