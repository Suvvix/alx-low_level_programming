#include "main.h"

/**
 * clear_bit - clears the bit
 * @n: the num to index
 * @index: the bit
 *
 * Return: 1 if successful, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
