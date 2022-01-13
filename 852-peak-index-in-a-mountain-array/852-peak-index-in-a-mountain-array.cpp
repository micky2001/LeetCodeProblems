class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        /*
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                return i;
        }
        return -1;
        */
        int start =0;
        int end = arr.size();
        while(start<end)
        {
            if(arr[start]<arr[start+1])
                start++;
            else
                return start;
        }
        return start;
    }
};