#include "036_Valid_Sudoku.cpp"
#include <string>

int main() {
	Solution solution;
	string arr[] = { ".87654321", "2........", "3........", "4........", "5........", "6........", "7........", "8........", "9........" };
	//string arr[] = {"123456789","........1","..1......",".1.......", ".........", ".........", ".........", ".........", ".........",};
	vector<vector<char>> board;
	for (int i = 0; i<9; i++) {
		vector<char> temp;
		for (int j = 0; j < 9; j++) {
			temp.push_back(arr[i][j]);
		}
		board.push_back(temp);
	}
	for (auto c : board) {
		for (auto d : c) {
			//cout << d;
		}
	}
	cout << solution.isValidSudoku(board);
	system("pause");
}