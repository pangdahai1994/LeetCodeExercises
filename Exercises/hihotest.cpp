/*hihocoder 7月22 测试题 很简单 但是我来晚了一小时 最后一题没来得及写
}*/
#include <iostream>
#include<cstring>

using namespace std;

/*int main() 2018/7/22/hiho/1 http://hihocoder.com/contest/offers69/problem/1
{
	char s[100001];
	int num = 0;
	while (cin.getline(s, 100001)) {
		bool is = false;
		num++;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == s[i + 1]) {
				is = true;
			}
		}
		const char* result = is ? "YES" : "NO";
		if (num>1) cout << endl;
		cout << result;
	}

}*/
/*
int main() http://hihocoder.com/contest/offers69/problem/2
{
	int n;
	cin >> n;
	int num[1000];
	long sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> num[i];
		sum += num[i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n-i; j++) {
			if (num[j] > num[j + 1]) {
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (int i = 1; i < n;i++) {
		num[n - i - 1] = num[n - i] - num[n - i - 1];
		for (int j = n - i - 1; j >= 1; j--) {
			if (num[j] < num[j - 1]) {
				int temp = num[j];
				num[j] = num[j - 1];
				num[j - 1] = temp;
			}
		}
	}

	cout << (sum - num[0])/2;
	cin >> num[0];
}
*/
/*http://hihocoder.com/contest/offers69/problem/3
int cal(int m, int n) {
	long int sum = 0;
	while (1)
	{
		sum += m / n;
		m = m / n;
		if (m == 0)
			break;
	}
	return sum;
}
int main() {
	int n,k;
	cin >> n >> k;
	int max;
	for (int i = 2; i <= k; i++) {
		int time = 0;
		while (k != 1) {
			if (k % i == 0) {
				k = k / i;
				time++;
			}
			else break;
		}
		if (time > 0) max = cal(n, i) / time;
	}
	cout << max;
	cin >> n;
}*/
/*

*/