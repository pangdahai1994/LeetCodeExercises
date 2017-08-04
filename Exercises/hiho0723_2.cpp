#include <iostream>
#include <map>
#include <string>
using namespace std;
namespace hiho_2 {
	bool isresult(string res) {
		for (int i = 0; i < res.length(); i++) {
			if (res[i] != '1' + i) return false;
		}
		return true;
	}

	int test() {
		int T;

		cin >> T;
		string s;
		map<string, bool> setted;
		string res[5000];
		int step[5000];
		for (int i = 0; i < T; i++) {
			bool found = false;
			setted.erase(setted.begin(), setted.end());
			cin >> s;
			int length = s.length();
			if (s.length() == 1) {
				cout << 0 << endl;
				continue;
			}
			res[0] = s;
			setted[s] = true;
			step[0] = 0;

			int p1 = 0;
			int p2 = 0;
			while (p1 <= p2) {
				for (int j = 0; j < length - 1; j++) {
					string temp = res[p1].substr(j, 2);
					string inserted = res[p1].substr(0, j) + res[p1].substr(j + 2);
					for (int k = 0; k < inserted.length(); k++) {
						string combine = inserted.substr(0, k) + temp + inserted.substr(k);
						if (setted.find(combine) == setted.end()) {
							p2++;
							setted[combine] = true;
							step[p2] = step[p1] + 1;
							res[p2] = combine;
							if (isresult(combine)) {
								cout << step[p2] << endl;
								found = true;
								goto next;
							}
						}
					}
				}
				p1++;
			}
		next:
			if (!found) cout << -1 << endl;
		}
		system("pause");
		return 0;
	}
}