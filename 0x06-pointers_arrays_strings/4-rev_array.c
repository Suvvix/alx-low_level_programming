#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k, t;

	for (i = 0, k = (n - 1); i < k; i++, k--)
	{
		t = a[i];
		a[i] = a[k];
		a[k] = t;
	}
}
