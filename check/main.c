#include <stdio.h>
#include "util/util_string.h"

int main(int argc, char *const *argv) {
	char *str_return = NULL;
	size_t int_return = 0;
	SERROR_SNCAT(str_return, &int_return, 5, "test1");
	printf(">%zu|%s<\n", int_return, str_return);

	SERROR_SNFCAT(str_return, &int_return, 5, "test2");
	printf(">%zu|%s<\n", int_return, str_return);

	SFREE(str_return);

	SERROR_SNCAT(str_return, &int_return, 5, "te\0t1", 5, "te\0t2", 5, "te\0t3", 5, "te\0t4");
	printf(">%zu|%s<\n", int_return, str_return);

	SERROR_SNFCAT(str_return, &int_return, 5, "test5");
	printf(">%zu|%s<\n", int_return, str_return);

	SFREE(str_return);

	SERROR_SNCAT(str_return, &int_return, 5, "test1");
	printf(">%zu|%s<\n", int_return, str_return);

	SERROR_SNFCAT(str_return, &int_return, 5, "test2", 5, "test3", 5, "test4");
	printf(">%zu|%s<\n", int_return, str_return);

	SFREE(str_return);

	return 0;
error:
	return 1;
}
