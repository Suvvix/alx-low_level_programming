#include "lists.h"

void constructor(void) __attribute__ ((constructor));

/**
 * _constructor - excutes before main()
 *
 * Return: void
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"\nI bore my house upon my back!\n");
}
