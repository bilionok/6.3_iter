#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.3(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[5] = { -2, 1, 3, 4, 1 };

			int S = Sum(t, 5);

			Assert::AreEqual(S, 31);
		}
	};
}
