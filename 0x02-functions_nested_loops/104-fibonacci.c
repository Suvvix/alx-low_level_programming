#include <stdio.h>

/**
 * main - fibonacci
 *
 * Discription: fibonacci
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int fibo = 1;
	unsigned long int obif = 2;
	unsigned long int m = 1000000000;
	unsigned long int fibo1;
	unsigned long int fibo2;
	unsigned long int obif1;
	unsigned long int obif2;

	printf("%lu", fibo);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", obif);
		obif += fibo;
		fibo = obif - fibo;
	}

	fibo1 = (fibo / m);
	fibo2 = (fibo % m);
	obif1 = (obif / m);
	obif2 = (obif % m);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", obif1 + (obif2 / m));
		printf("%lu", obif2 % m);
		obif1 = obif1 + fibo;
		fibo1 = obif1 - fibo;
		obif2 = obif2 + fibo;
		fibo2 = obif2 - fibo;
	}
	printf("\n");
	return (0);
}

