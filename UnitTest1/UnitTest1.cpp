#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1ii/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[100] = "21r3qewgrd,-";
			Assert::AreEqual(1, Count(str));
		}
	};
}
