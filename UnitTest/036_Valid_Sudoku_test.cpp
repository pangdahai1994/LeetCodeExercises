#include "stdafx.h"
#include "CppUnitTest.h"
#include "036_Valid_Sudoku.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My036_Valid_Sudoku_UnitTest
{		
	TEST_CLASS(ValidSudokuTest)
	{
	public:
		
		TEST_METHOD(isValidSudokuTest)
		{
			Solution solution;
			string arr[] = { ".87654321", "2........", "3........", "4........", "5........", "6........", "7........", "8........", "9........" };
			vector<vector<char>> board;
			for (int i = 0; i<9; i++) {
				vector<char> temp;
				for (int j = 0; j < 9; j++) {
					temp.push_back(arr[i][j]);
				}
				board.push_back(temp);
			}
			Assert::AreEqual(solution.isValidSudoku(board),true);
			Logger::WriteMessage("testDivide() finish testing!\n");
			system("pause");
		}

	};
}