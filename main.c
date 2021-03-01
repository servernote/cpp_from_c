/*
 C++クラス生成/呼出/破棄 C言語メインプログラム
*/
#include "test.h"

extern int main(int argc, char **argv) {

	void *handle = test_new();

	if(handle) {

		test_print(handle, "てすとぷりんと\n");

		test_delete(handle);

	}

	return 0;
}
