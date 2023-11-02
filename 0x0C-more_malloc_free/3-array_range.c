#include <stdlib.h>
#include "main.h"


/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int n, x;
	int *agrippa;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	agrippa = malloc(sizeof(int) * n);
	if (!agrippa)
		return (NULL);
	for (x = 0; x < n; x++)
		agrippa[x] = min++;
	return (agrippa);
}
