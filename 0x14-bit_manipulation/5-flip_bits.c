#include "main.h"

/**
 * flip_bits - return number of bits that need to be flipped
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ox = n ^ m;
	unsigned int box = 0;

	while (ox)
	{
		if (ox & 1ul)
			box++;
		ox = ox >> 1;
	}
	return (box);
}
