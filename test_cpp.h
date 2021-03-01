//
// テストC++クラス定義ヘッダ
//
#ifndef __test_cpp_h__
#define __test_cpp_h__

#include <string>
#include "test.h"

class CTest {
public:
	CTest(void);
	~CTest(void);
	void print( const std::string &str );
};

#endif // __test_cpp_h__
