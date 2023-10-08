#include <stdio.h>


/**
 * main - entry point
 *
 * description: printing alphabets except q and e.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
