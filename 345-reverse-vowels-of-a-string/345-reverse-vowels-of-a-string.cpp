class Solution {
public:
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;
        string str = "aeiouAEIOU";
        while(start<end)
        {
            if(!(str.find(s[start]) != string::npos))
                start++;
            if(!(str.find(s[end]) != string::npos))
                end--;
            if((str.find(s[start]) != string::npos) && (str.find(s[end]) != string::npos))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};