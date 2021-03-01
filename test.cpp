//
// テストC++クラス定義
//
#include <iostream>
#include <string>
#include "test_cpp.h"

CTest::CTest(void) {
	std::cout << "CTest::constructor" << std::endl;
}

CTest::~CTest(void) {
	std::cout << "CTest::destructor" << std::endl;
}

void CTest::print( const std::string &str ) {
	std::cout << "CTest::print" << std::endl;
	std::cout << str;
}

extern void* test_new(void) {

	CTest *handle = new CTest();

	return (void*)handle;
}

extern int test_print(const void *handle, const char *fmt, ...) {
	int r = (-1);

	if(handle) {

		va_list va; char buf[2048];
		va_start( va,fmt );
		r = vsnprintf( buf,sizeof(buf),fmt,va );
		va_end( va );

		if(r >= 0) {
			std::string s = std::string(buf);
			((CTest*)handle)->print(s);
		}
	}
	
	return r;
}

extern int test_delete(void *handle) {

	if(handle) {

		delete (CTest*)handle;

	}

	return 0;
}
