#include "main.h"

/**
 * set_bit - sets the bit
 * @n: the numr to index
 * @index: the bit
 *
 * Return: 1 if succesfful, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1l << index));
}
