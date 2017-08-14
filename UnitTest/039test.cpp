#include "stdafx.h"
#include "CppUnitTest.h"
#include "039_CombinationSum .cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My039_UnitTest
{
	TEST_CLASS(Test)
	{
	public:
		TEST_METHOD(_039Test)
		{
			Solution solution;
			vector<int> test1 = {2,3,6,7};
			solution.combinationSum(test1, 7);
			Logger::WriteMessage("testDivide() finish testing!\n");
		}

	};
}