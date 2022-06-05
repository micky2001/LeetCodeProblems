class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxm=-1,count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=maxm)
                maxm = arr[i];
            if(maxm == i)
                count++;
            
        }
        return count;
    }
};