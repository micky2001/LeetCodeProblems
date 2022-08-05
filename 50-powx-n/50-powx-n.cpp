class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
		long long temp = abs(n);
		while(temp) {
			if(temp % 2 != 0) {
				ans = ans * x;      // 4 ^ 3  --> 4 * (4)^2
				temp = temp - 1;
			}
			else {
				x = x * x;         // 2 ^ 10 --> (2 * 2) ^ 5   i.e  x = x * x, n = n / 2
				temp = temp / 2;
			}
		}
		if(n<0)
			ans = 1/ans;
		return ans;
    }
};