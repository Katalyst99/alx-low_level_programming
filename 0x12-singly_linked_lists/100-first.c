#include <stdio.h>

/**
 * _before_main - Prints string before main function execution
 */
void _before_main(void)__attribute__((constructor));

void _before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n")
}
