#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **dog, x, y;

	dog = malloc(sizeof(*dog) * height);

	if (width <= 0 || height <= 0 || dog == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			dog[x] = malloc(sizeof(**dog) * width);
			if (dog[x] == 0)
			{
				while (x--)
					free(dog[x]);
				free(dog);
				return (NULL);
			}

			for (y = 0; y < width; y++)
				dog[x][y] = 0;
		}
	}

	return (dog);
}
