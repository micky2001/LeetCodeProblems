class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
    int sum=0;
    int l=arr.size();
    for(int i=0;i<arr.size();i++)
    {
        sum +=(((i + 1)* (l - i)+ 1)/ 2)* arr[i];
    }
    return sum;
    }
};