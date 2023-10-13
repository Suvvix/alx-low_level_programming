#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function finds and prints the largest prime factor of a given number.
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largestPrimeFactor = 0;
	long i = 2;

	while (number > 1)
	{
		if (number % i == 0)
		{
			largestPrimeFactor = i;
			number /= i;
		}
		else
		{
			i++;
		}
	}

	printf("%ld\n", largestPrimeFactor);

	return 0;
}
