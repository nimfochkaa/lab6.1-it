#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1 іт/6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My61
{
	TEST_CLASS(My61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int b[size] = { 1, 2, 5, -5, 10 }; 
			int expectedCount = 3; 

			int actualCount = Count(b, size);
			Assert::AreEqual(expectedCount, actualCount);
		}
	};
}
