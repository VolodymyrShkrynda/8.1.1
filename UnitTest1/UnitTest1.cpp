#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)

		{
			bool t;
			char k[] = { "+-=***+" };
			t = Count(k);
			Assert::AreEqual(t, true);
		}
	};
}
