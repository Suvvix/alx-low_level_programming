#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 * @ox: The divisor to test.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int ox);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Check if a number is prime by testing divisors.
 * @n: The number to check.
 * @ox: The divisor to test.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int ox)
{
	if (ox >= n && n > 1)
		return (1);
	else if (n % ox == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, ox + 1));
}

