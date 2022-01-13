class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> a;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i;j<arr.size();j++)
            {
                if((arr[i]!=arr[j]) && count(arr.begin(),arr.end(),arr[i])==count(arr.begin(),arr.end(),arr[j]))
                return false;
            }
        }
        return true;
    }
};