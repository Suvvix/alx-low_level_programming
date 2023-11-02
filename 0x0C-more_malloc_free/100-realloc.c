#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _realloc - Reallocates memory using malloc and free
*
* @ptr: Pointer to previously allocated memory
* @old_size: Size in bytes of the old allocated space for ptr
* @new_size: The new size in bytes of the memory block
*
* Return: A pointer to the newly allocated memory of the size, or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *Magnus;
	unsigned int Paracelsus_size;
	char *Paracelsus = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		Magnus = malloc(new_size);
		return (Magnus);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	Magnus = malloc(new_size);
	if (Magnus == NULL)
		return (NULL);
	if (new_size > old_size)
		Paracelsus_size = old_size;
	for (i = 0; i < Paracelsus_size; i++)
		Magnus[i] = Paracelsus[i];
	free(ptr);
	return (Magnus);
}

