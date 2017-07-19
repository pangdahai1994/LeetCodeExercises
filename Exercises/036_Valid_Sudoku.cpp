#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		bool set[10];
		reset(set);
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (board[i][j] != '.') {
					if (set[board[i][j] - '0']) {
						return false;
					}
					else {
						set[board[i][j] - '0'] = true;
					}
				}
			}
			reset(set);
		}

		for (int j = 0; j < 9; j++) {
			for (int i = 0; i < 9; i++) {
				if (board[i][j] != '.') {
					if (set[board[i][j] - '0']) {
						return false;
					}
					else {
						set[board[i][j] - '0'] = true;
					}
				}
			}
			reset(set);
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 3; k++) {
					for (int l = 0; l < 3; l++) {
						int m = i * 3 + k;
						int n = j * 3 + l;
						if (board[m][n] != '.') {
							if (set[board[m][n] - '0']) {
								return false;
							}
							else {
								set[board[m][n] - '0'] = true;
							}
						}
					}
				}
				reset(set);
			}
		}
		return true;
	}

	void reset(bool* set) {
		for (int i = 0; i < 10; i++) set[i] = false;
	}
};