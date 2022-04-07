#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_2.2\String.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			String a = "hello";
			Assert::AreEqual(a * "e", 1u);
		}
	};
}
