class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        int a[2];
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i] != s2[i])
            {
                count++;
                if(count>2)
                    return false;
                a[count-1]=i;
                
            }
        }
        if(count == 0)
            return true;
        else if(count==1)
            return false;
        else if(s1[a[0]]==s2[a[1]] && s1[a[1]]==s2[a[0]])
            return true;
        return false;
        
    }
};