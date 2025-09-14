#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_03_02/StirBellDigits.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(CheckStirlVal)
		{
			StirBellDigits Digit = StirBellDigits(11);
			bool result = Digit.checkStirlingDigit(5, 4, 10);
			Assert::IsTrue(result);
		}
		TEST_METHOD(CheckBellDigit)
		{
			StirBellDigits Digit = StirBellDigits(11);
			bool result = Digit.checkBellDigit(5, 52);
			Assert::IsTrue(result);
		}
	};
}