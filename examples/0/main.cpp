/*
	A simple exemple of how to use the test API
*/
// First include your function library to test
#include "arithmetics.hpp"
// And then include the Test.hpp file
#include "../../include/TestAPI.hpp"

// Declare your test configuration by enabling or diabling tests
#define DO_ADD_TESTS
//#define DO_SUB_TESTS
//#define DO_MUL_TESTS
#define DO_DIV_TESTS

// Define the Test function
bool Test()
{
	// Include your tests files
#ifdef DO_ADD_TESTS
	#include "tests_add.tpp"
#endif // DO_ADD_TESTS

#ifdef DO_SUB_TESTS
	#include "tests_sub.tpp"
#endif // DO_SUB_TESTS

#ifdef DO_MUL_TESTS
	#include "tests_mul.tpp"
#endif // DO_MUL_TESTS

#ifdef DO_DIV_TESTS
	#include "tests_div.tpp"
#endif // DO_DIV_TESTS

	// Or create a test
	RegisterTest("All operations",
		TEST
		{
			int r = myDiv(mySub(myAdd(8, myMul(2, 2)), -12), 4);
			if(r == 6)
			{
				TEST_SUCCESS
			}
			TEST_FAILURE
		}
	);
	
	// Run the tests and return th result or whatever else you want
	// Notice that tests are sorted by their name in lexical order so they are running in this order
	RUN_TESTS
	return TEST_RESULT;
}

int main(int argc, char** argv)
{
	// Run the Test function somewhere in the code
	if(Test())
	{
		return 0;
	}
	return 1;
}