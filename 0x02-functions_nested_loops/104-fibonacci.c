#include <stdio.h>

/**
 * main - fibonacci
 *
 * discription: fibonacci
 *
 * Return:  (Success)
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;
	unsigned long int b = 10000000000;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_half1 = fib1 / b;
	fib2_half1 = fib2 / b;
	fib1_half2 = fib1 % b;
	fib2_half2 = fib2 % b;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= b;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
				fib1_half1 = fib2_half1;
				fib1_half2 = fib2_half2;
				fib2_half1 = half1;
				fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
