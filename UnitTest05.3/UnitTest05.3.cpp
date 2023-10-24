#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.3/lab05.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest053
{
	TEST_CLASS(UnitTest053)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			double expcectred_result = 1.19225;
			double actual_result = h(x);

			Assert::AreEqual(expcectred_result, actual_result, 0.0001);
		}
	};
}
