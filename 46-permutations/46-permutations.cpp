class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
	    vector<vector<int> > res;
	    
	    permuteRecursive(num, 0, res);
	    return res;
    }
    
	void permuteRecursive(vector<int> &num, int pos, vector<vector<int> > &res)	{
		if (pos >= num.size()) {
		   
		    res.push_back(num);
		    return;
		}
		
		for (int i = pos; i < num.size(); i++) {
		    swap(num[pos], num[i]);
		    permuteRecursive(num, pos + 1, res);
		    // reset
		    swap(num[pos], num[i]);
		}
    }
};