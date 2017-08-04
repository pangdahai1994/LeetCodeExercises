#include<iostream>
class Solution {
public:
	int divide(int dividend, int divisor) {
		if (divisor == 0) return INT_MAX;
		long long result = 0;
		long long beichushu = dividend;
		if (beichushu < 0) beichushu = beichushu * -1;
		long long chushu = divisor;
		if (chushu < 0) chushu = -chushu;
		int times = 0;
		while (beichushu >= chushu) {
			chushu = chushu << 1;
			times++;
		}
		while (times > 0) {
			times -= 1;
			chushu = chushu >> 1;
			result *= 2;
			if (beichushu >= chushu) {
				result += 1;
				beichushu -= chushu;
			}
		}
		//if ((dividend < 0)&&(beichushu != 0)) result++;
		if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)) result = -result;
		return result;
	}
};