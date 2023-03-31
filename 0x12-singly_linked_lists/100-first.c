#include <stdio.h>

/**
 * _before_main - Prints string before main function execution
 */
void __attribute__ ((constructor)) _before_main()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
