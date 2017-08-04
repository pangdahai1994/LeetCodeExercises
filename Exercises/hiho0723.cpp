#include <iostream>

using namespace std;
namespace hiho {
	bool ispart(char** ditan, int n, int m, char** zhaopian, int row, int col) {
		bool found = false;
		for (int i = 0; i < n; i++) {
			if (i == row) continue;
			for (int j = 0; j < m; j++) {
				if (j == col) continue;
				bool ispart = true;
				for (int k = 0; k < row; k++) {
					for (int l = 0; l < col; l++) {
						if (zhaopian[k][l] != ditan[(k + i) % n][(l + j) % m]) {
							ispart = false;
							break;
						}
					}
					if (!ispart) break;
					if (k == row - 1) {
						return true;
					}
				}
			}
		}

		return found;
	}

	int test() {
		int n, m, k;
		cin >> n >> m >> k;
		char** ditan = new char*[n];
		for (int i = 0; i < n; i++) {
			ditan[i] = new char[m];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> ditan[i][j];
			}
		}
		for (int i = 0; i < k; i++) {
			int row, col;
			cin >> row >> col;
			char** zhaopian = new char*[row];
			for (int i = 0; i < row; i++) {
				zhaopian[i] = new char[col];
			}
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					cin >> zhaopian[i][j];
				}
			}
			if (ispart(ditan, n, m, zhaopian, row, col)) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
			for (int i = 0; i < row; i++) {
				delete[] zhaopian[i];
			}
			delete[] zhaopian;
		}
		for (int i = 0; i < n; i++) {
			delete[] ditan[i];
		}
		delete[] ditan;
		return 0;
	}
}