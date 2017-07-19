#include "stdafx.h"
#include "CppUnitTest.h"
#include "050_Pow.cpp"
#include <iostream>
#include <string>
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My050_Pow_UnitTest
{
	TEST_CLASS(Pow)
	{
	public:

		TEST_METHOD(myPowTest)
		{
			Solution s;
			double res=s.myPow(34.00515, -3);
			Assert::AreEqual(1.0,res);
			string message = to_string(res);
			const char* p = message.c_str();
			Logger::WriteMessage(p);
		}

		TEST_METHOD(shitint) {
			int a = -2147483648;
			a = -a;
			string message = to_string(a);
			const char* p = message.c_str();
			Logger::WriteMessage(p);
		}

	};
}