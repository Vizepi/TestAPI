/*
    VZP Test API - The most basic C++ testing API
    Copyright (C) 2015 Joseph Kieffer

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef VZP_TEST_HPP
#define VZP_TEST_HPP

#include <map>
#include <string>
#include <functional>
#include <iostream>
#ifdef _WIN32
#include <windows.h>
unsigned long __vzp_timer()
{
	return GetTickCount();
}
#else
#include <sys/time.h>
unsigned long __vzp_timer()
{
        struct timeval tv;
        if(gettimeofday(&tv, NULL) != 0) return 0;
        return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
}
#endif

static std::map<std::string, std::function<bool(void)>> __vzp_tests;

#define TEST_SUCCESS std::cout<<"Success"<<std::endl;return true;
#define TEST_FAILURE std::cout<<"Failure"<<std::endl;return false;
#define TEST [] (void) -> bool
#define RegisterTest(name, f) (__vzp_tests[(name)] = (f))

#define RUN_TESTS \
	int success = 0; \
	std::cout << "Running tests..." << std::endl; \
	unsigned long timer = __vzp_timer(); \
	for(std::map<std::string, std::function<bool(void)>>::iterator it = __vzp_tests.begin(); it != __vzp_tests.end(); ++it) \
	{ \
		std::cout << it->first << std::endl; \
		if((it->second)()) \
		{ \
				success++; \
		} \
		std::cout << std::endl; \
	} \
	timer = __vzp_timer() - timer; \
	std::cout << "Test run : " << __vzp_tests.size() << std::endl; \
	std::cout << "Success  : " << success << std::endl; \
	std::cout << "Failure  : " << __vzp_tests.size() - success << std::endl; \
	std::cout << "Exe Time : " << timer << " ms" << std::endl; \
	bool TEST_RESULT = (unsigned long)success == __vzp_tests.size();

bool Test(void);

#endif // VZP_TEST_HPP
