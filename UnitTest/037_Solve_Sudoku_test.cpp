#include "stdafx.h"
#include "CppUnitTest.h"
#include "037_Soduku_Solver.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Solve_Soduku_UnitTest
{
	TEST_CLASS(SolveSudoku)
	{
	public:

		TEST_METHOD(SolveSudokuTest)
		{
			Solution solution;
			string arr[] = { "..9748...","7........",".2.1.9...","..7...24.",".64.1.59.",".98...3..","...8.3.2.","........6","...2759.." };
			//string arr[] = { "53..7....", "6..195...", ".98....6.", "8...6...3", "4..8.3..1", "7...2...6", ".6....28.", "...419..5", "....8..79" };
			//string arr[] = { "534678912", "672195348", "198342567", "85..61423", "426853791", "713924856", "961.37284", "287419635", "3452861.9" };
			vector<vector<char>> board;
			for (int i = 0; i < 9; i++) {
				vector<char> temp;
				for (int j = 0; j < 9; j++) {
					temp.push_back(arr[i][j]);
				}
				board.push_back(temp);
			}
			solution.solveSudoku(board);
			for (int i = 0; i < 9; i++) {
				vector<char> temp;
				for (int j = 0; j < 9; j++) {
					cout << board[i][j];
				}
				cout << endl;
			}
			system("pause");
		}

	};
}