# TestAPI
The most basic C++11 test API

This simple header file is designed to provide the most basic C++11 test API.
Simply include the TestAPI.hpp file in your test project and register tests with
the RegsiterTest(name, test) macro.

You have to implement the content of the bool Test(void) method.
This method should include all tests and then run the RUN_TESTS macro.
See examples for more details.
You can also define your tests in separated files and include them in the Test function.

Have fun with tests

Tested on Windows 10, theoretically cross-platform ;-)

Joseph Kieffer