#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * @val: root
 * Return: integer (the square root)
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 1));
}

/**
 * square - calculates the square root of a number
 * @n: integer to find the square root of
 * @val: current value of the square root being tested
 * Return: integer (the square root or -1 if not found)
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

