#include "stdafx.h"
#include "CppUnitTest.h"
#include "042_Trapping Rain Water.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My042_UnitTest
{
	TEST_CLASS(Test)
	{
	public:
		TEST_METHOD(_042Test)
		{
			Solution solution;
			vector<int> test1 = {8,2,3,4,5,4,5,4,5,9,8,9,5,8,4,2,1,5,7,8,9,3,2};
			Assert::AreEqual(6,solution.trap(test1));
			Logger::WriteMessage("testDivide() finish testing!\n");
		}

	};
}