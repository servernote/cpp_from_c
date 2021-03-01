/*
 C++クラス生成/呼出/破棄 C言語インタフェース
*/
#ifndef __test_h__
#define __test_h__

#include <stdio.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void* test_new(void);
extern int test_print(const void *handle, const char *fmt, ...);
extern int test_delete(void *handle);

#ifdef __cplusplus
};
#endif

#endif /* __test_h__ */
