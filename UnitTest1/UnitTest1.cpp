#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_03_01/Arrangements.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(check1)
		{
			Arrangement arrangement = Arrangement(10, 9);
			unsigned long long res = arrangement.getArrangementNoRepetition();
			Assert::AreEqual((int)res, 3'628'800);
		}

		TEST_METHOD(check2)
		{
			Arrangement arrangement = Arrangement(15, 5);
			unsigned long long res = arrangement.getArrangementNoRepetition();
			Assert::AreEqual((int)res, 360'360);
		}
	};
}