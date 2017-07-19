class Solution {
public:
	double myPow(double x, int n) {
		if (n == -2147483647 - 1) {
			if ((x > 1)||(x<-1)) return 0;
			if ((x == 1)||(x==-1)) return 1;
			//NAN;
		}
		if (n < 0) return myPow(1/x, -n);
		double res = 1.0;
		while (n) {
			if (n & 1) res *= x;
			x *= x;
			n >>= 1;
		}
		return res;
	}
};