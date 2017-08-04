#include "stdafx.h"
#include "CppUnitTest.h"
#include "029_DivideTwoIntegers.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My036_Valid_Sudoku_UnitTest
{
	TEST_CLASS(Test)
	{
	public:

		TEST_METHOD(_029Test)
		{
			Solution solution;
			int i1= -2147483647 - 1;
			int i2 = -1;
			
			int res = solution.divide(i1, i2);
			Assert::AreEqual(res, i1/i2);
			Logger::WriteMessage("testDivide() finish testing!\n");
		}

	};
}