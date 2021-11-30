#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR8.1.2\PR8.1.2\PR8.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "noason";
			char* dest1 = new char[151];
			dest1[0] = '\0';
			char* dest2;
			dest2 = Change(dest1, str, dest1, 0);
			Assert::AreEqual(dest2, "***ason");
		}
	};
}
