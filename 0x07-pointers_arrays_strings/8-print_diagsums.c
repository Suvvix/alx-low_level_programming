#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int x, s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x];
		s2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
