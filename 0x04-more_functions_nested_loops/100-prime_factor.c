#include <stdio.h>
#include <math.h>

/**
 * main - Entry point for the program
 *
 * This function finds and prints the largest prime factor of a given number.
 *
 * Return: Always 0
 */

int main(void)
{
	long int number;
	long int largestPrime;
	long int divisor;

	number = 612852475143;
	largestPrime = -1;

	while (number % 2 == 0)
	{
		largestPrime = 2;
		number /= 2;
	}

	for (divisor = 3; divisor <= sqrt(number); divisor = divisor + 2)
	{
		while (number % divisor == 0)
		{
			largestPrime = divisor;
			number = number / divisor;
		}
	}

	if (number > 2)
		largestPrime = number;

	printf("%ld\n", largestPrime);

	return (0);
}
